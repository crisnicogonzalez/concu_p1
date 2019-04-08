//
// Created by cristiangonzalez on 07/04/19.
//

#ifndef NEWS_SERVICE_PORTALCLIENT_H
#define NEWS_SERVICE_PORTALCLIENT_H


#include <string>
#include "../request/Resource.h"
#include "../ipc/FifoLectura.h"
#include "../utils/Constants.h"
#include "../request/RequestBuilder.h"
#include "../request/RequestSerializer.h"
#include "../ipc/FifoEscritura.h"
#include "Client.h"
#include "../serializer/WeatherSerializer.h"

class PortalClient :public Client{

public:
    PortalClient():requestChannel(KEY_PORTAL_CHANNEL){
        requestChannel.abrir();
    }
    void get(Resource resource,std::string resourceId);

protected:
    FifoEscritura requestChannel;
    RequestBuilder builder;
    RequestSerializer serializer;
    WeatherSerializer weatherSerializer;

};


#endif //NEWS_SERVICE_PORTALCLIENT_H
