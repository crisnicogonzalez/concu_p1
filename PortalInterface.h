#ifndef NEWS_SERVICE_PORTALINTERFACE_H
#define NEWS_SERVICE_PORTALINTERFACE_H


#include "client/PortalClient.h"
#include "Administrator.h"

class PortalInterface {
public:
    PortalInterface();
    ~PortalInterface();
    void init();
    void runClient();
    void runAdmin();
    void defineRol();

protected:
    WeatherDTO buildWeather(string cityId);
    FinancialQuotationDTO buildFinancialQuotation(string coinId);
    PortalClient client;
};


#endif //NEWS_SERVICE_PORTALINTERFACE_H
