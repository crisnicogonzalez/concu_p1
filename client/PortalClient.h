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
#include "../serializer/RequestSerializer.h"
#include "../ipc/FifoEscritura.h"
#include "Client.h"
#include "../serializer/WeatherSerializer.h"
#include "../dto/FinancialQuotationDTO.h"
#include "../serializer/FinancialQuotationSerializer.h"

class PortalClient :public Client{

public:
    PortalClient():requestChannel(KEY_PORTAL_CHANNEL){
        requestChannel.abrir();
    }
    void get(Resource resource,std::string resourceId);
    void updateWeather(WeatherDTO weather);
    void updateFinancialQuotation(std::string id,FinancialQuotationDTO financialQuotation);

protected:
    FifoEscritura requestChannel;
    RequestBuilder builder;
    RequestSerializer serializer;
    WeatherSerializer weatherSerializer;
    FinancialQuotationSerializer financialQuotationSerializer;

};


#endif //NEWS_SERVICE_PORTALCLIENT_H
