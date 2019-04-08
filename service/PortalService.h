//
// Created by cristiangonzalez on 07/04/19.
//

#ifndef NEWS_SERVICE_PORTALSERVICE_H
#define NEWS_SERVICE_PORTALSERVICE_H


#include "../client/FinancialQuotationClient.h"
#include "../client/WeatherClient.h"
#include "Service.h"

class PortalService :public Service{

public:
    PortalService():requestChannel(KEY_PORTAL_CHANNEL){}
    void init();


protected:
    void listen();
    void answerRequest(string requestSerialized);
    WeatherClient weatherClient;
    FinancialQuotationClient financialQuotationClient;
    FifoLectura requestChannel;
    Client client;
    RequestSerializer serializer;

};


#endif //NEWS_SERVICE_PORTALSERVICE_H
