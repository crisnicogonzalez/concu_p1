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
    PortalService(bool delay, bool withThreads):requestChannel(KEY_PORTAL_CHANNEL){
        withDelay = delay;
        concurrently = withThreads;
    }
    void init();


protected:
    void listen();
    void answerRequest(const string& requestSerialized);
    WeatherClient weatherClient;
    FinancialQuotationClient financialQuotationClient;
    FifoLectura requestChannel;
    Client client;
    RequestSerializer serializer;
    bool withDelay;
    bool concurrently;

};


#endif //NEWS_SERVICE_PORTALSERVICE_H
