#ifndef NEWS_SERVICE_PORTALINTERFACE_H
#define NEWS_SERVICE_PORTALINTERFACE_H


#include "client/PortalClient.h"
#include "Administrator.h"

class PortalMenu {
public:
    PortalMenu();
    ~PortalMenu();
    void showMenu();
    void showClientMenu();
    void showAdministratorMenu();
    void showMenuToSelectRol();

protected:
    WeatherDTO buildWeather(string cityId);
    FinancialQuotationDTO buildFinancialQuotation(string coinId);
    PortalClient client;
};


#endif //NEWS_SERVICE_PORTALINTERFACE_H
