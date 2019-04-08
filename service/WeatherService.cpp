#include <iostream>
#include "WeatherService.h"
#include "../request/Request.h"


static bool condition = true;

WeatherService::~WeatherService() {
    std::cout << "Desconstructor temperature Reporter" << std::endl;
}


void WeatherService::init() {
    std::cout << "[INFO] WeatherService init" << std::endl;
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


void WeatherService::listen() {
    std::cout << "[WeatherService] [INFO] Listen" << std::endl;
    while(condition){
        const string message = readOfChannel(requestsChannel);
        Request request = serializer.deserialize(message);
        WeatherDTO weather = weathers[request.getResourceId()];
        string response = weatherSerializer.serialize(weather);
        if(client.sendToChannel("WC",request.getClientId(),"WS",response)){
            cout << "[WeatherService] [INFO] sent message correctly" << endl;
        }
    }



}