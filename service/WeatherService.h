//
// Created by cristiangonzalez on 06/04/19.
//

#ifndef NEWS_SERVICE_WEATHERSERVICE_H
#define NEWS_SERVICE_WEATHERSERVICE_H

#include <string>
#include "../ipc/FifoLectura.h"
#include "../ipc/FifoEscritura.h"
#include "../utils/Constants.h"
#include "Service.h"
#include "../serializer/RequestSerializer.h"
#include "../dto/WeatherDTO.h"
#include "../serializer/WeatherSerializer.h"
#include <map>


using namespace std;


class WeatherService :public Service{
public:
    WeatherService():requestsChannel(KEY_REQUEST_SENDER_CHANNEL_WEATHER){
        requestsChannel.abrir();
    }
    ~WeatherService();
    void init();
    void listen();
protected:
    map<std::string,FifoEscritura> responseChannelById;
    FifoLectura requestsChannel;
    RequestSerializer serializer;
    map<std::string,WeatherDTO> weathers;
    WeatherSerializer weatherSerializer;
    void sendResponse(WeatherDTO weather,string clientId);
};


#endif //NEWS_SERVICE_WEATHERSERVICE_H
