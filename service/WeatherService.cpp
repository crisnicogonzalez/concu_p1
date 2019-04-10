#include <utility>

#include <utility>

#include <iostream>
#include <fstream>
#include "WeatherService.h"
#include "../request/Request.h"
#include "../signal/SIGINT_Handler.h"
#include "../signal/SignalHandler.h"


WeatherService::~WeatherService() {
    requestsChannel.cerrar();
    requestsChannel.eliminar();
    writeFile();

}


void WeatherService::init() {
    std::cout << "[WeatherService] [INFO] init with pid: "<< getpid() << std::endl;
    WeatherDTO mexico;
    mexico.setName("Ciudad de Mexico");
    mexico.setHumidity(10);
    mexico.setPressure(10);
    mexico.setTemperature(10);

    WeatherDTO bsAs;
    bsAs.setName("Buenos Aires");
    bsAs.setHumidity(20);
    bsAs.setTemperature(20);
    bsAs.setPressure(20);

    WeatherDTO sanPablo;
    sanPablo.setName("San Pablo");
    sanPablo.setPressure(30);
    sanPablo.setTemperature(30);
    sanPablo.setHumidity(30);

    weathers["1"] = mexico;
    weathers["2"] = bsAs;
    weathers["3"] = sanPablo;
    listen();
}


void WeatherService::sendResponse(WeatherDTO weather,string clientId) {
    string response = weatherSerializer.serialize(std::move(weather));
    if(client.sendToChannel("PS",std::move(clientId),"WS",response)){
        cout << "[WeatherService] [INFO] sent message correctly" << endl;
    }
}


void WeatherService::writeFile() {
    std::ofstream file;
    file.open ("weather_report.txt");
    map<string,WeatherDTO>::iterator in;
    for(in=weathers.begin(); in!=weathers.end();in++){
        WeatherDTO w = in->second;
        file << "name:"<<w.getName()<<" humidity:"<<w.getHumidity()<<" pressure:"<<w.getPressure() << " temperature:"<<w.getTemperature() << "\n";
    }
    file.close();
}

void WeatherService::listen() {
    std::cout << "[WeatherService] [INFO] Listen" << std::endl;
    SIGINT_Handler sigint_handler;
    SignalHandler :: getInstance()->registrarHandler ( SIGINT,&sigint_handler );
    while(sigint_handler.getGracefulQuit() == 0){
        ReadResult result = readOfChannel(requestsChannel);
        if(result.isOk()){
            Request request = serializer.deserialize(result.getMessage());
            if(request.getMethod() == GET){
                WeatherDTO weather = weathers[request.getResourceId()];
                sendResponse(weather,request.getClientId());
            }else{
                WeatherDTO weather = weatherSerializer.deserialize(request.getBody());
                WeatherDTO oldWeather = weathers[request.getResourceId()];
                weather.setName(oldWeather.getName());
                weathers[request.getResourceId()] = weather;
                WeatherDTO newWeather = weathers[request.getResourceId()];
                sendResponse(newWeather,request.getClientId());

            }
        }
    }
    SignalHandler::destruir();



}