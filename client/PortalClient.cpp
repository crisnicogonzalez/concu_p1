#include <utility>
#include <iostream>
#include "PortalClient.h"

using namespace std;


void PortalClient::get(Resource resource, std::string resourceId) {
    cout << "[PortalClient] [INFO] GET Resource" << std::endl;
    builder.setResource(resource)->setResourceId(move(resourceId))->setMethod(GET)->setClientId(to_string(getppid()));
    Request request = builder.getResult();
    cout << "[PortalClient] [INFO] Request" << endl;
    request.print();
    string requestSerialized =  serializer.serialize(request);
    if(send(requestChannel,requestSerialized)){
        cout << "[PortalClient] [INFO] sent message correctly"<< endl;
        string message = readOfChannel("PC",request.getClientId(),"PS");
        if(resource == CLIMA){
            weatherSerializer.deserialize(message).print();
        }else{
            financialQuotationSerializer.deserialize(message).print();
        }
    }else{
        cout << "[PortalClient] [ERROR] cannot send message";
    }
}




void PortalClient::updateFinancialQuotation(std::string id, FinancialQuotationDTO financialQuotation) {
    cout << "[PortalClient] [INFO] PUT financial quotation" << std::endl;
    Request request = builder
    .setResource(COTIZACION)
    ->setClientId(to_string(getppid()))
    ->setMethod(PUT)
    ->setResourceId(id)
    ->setBody(financialQuotationSerializer.serialize(financialQuotation))
    ->getResult();


    string requestSerialized = serializer.serialize(request);
    if(send(requestChannel,requestSerialized)){
        cout << "[PortalClient] [INFO] se envió request para actualizar datos" << endl;
        string message = readOfChannel("PC",request.getClientId(),"PS");
        financialQuotationSerializer.deserialize(message).print();

    }

}


void PortalClient::updateWeather(WeatherDTO weather) {
    cout << "[PortalClient] [INFO] PUT weather" << std::endl;
    Request request = builder
            .setResource(CLIMA)
            ->setClientId(to_string(getppid()))
            ->setMethod(PUT)
            ->setResourceId(weather.getCityId())
            ->setBody(weatherSerializer.serialize(weather))
            ->getResult();

    string requestSerialized = serializer.serialize(request);
    if(send(requestChannel,requestSerialized)){
        cout << "[PortalClient] [INFO] se envió request para actualizar datos" << endl;
        string message = readOfChannel("PC",request.getClientId(),"PS");
        weatherSerializer.deserialize(message).print();

    }
}