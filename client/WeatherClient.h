#ifndef NEWS_SERVICE_WEATHERCLIENT_H
#define NEWS_SERVICE_WEATHERCLIENT_H


#include "Client.h"
#include "../utils/Constants.h"
#include "../dto/WeatherDTO.h"


using namespace std;


class WeatherClient : public Client{
public:
    WeatherClient():Client(),requestSenderChannel(KEY_REQUEST_SENDER_CHANNEL_WEATHER){
        requestSenderChannel.abrir();
        builder.setResource(CLIMA);
    }
    string get(string clientID,string id);
    string put(Request request);

protected:
    FifoEscritura requestSenderChannel;
    FifoLectura responseReaderChannel;
};


#endif //NEWS_SERVICE_WEATHERCLIENT_H
