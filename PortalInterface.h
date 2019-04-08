#ifndef NEWS_SERVICE_PORTALINTERFACE_H
#define NEWS_SERVICE_PORTALINTERFACE_H


#include "client/PortalClient.h"

class PortalInterface {
public:
    PortalInterface();
    ~PortalInterface();
    void init();
    void buildRequest();

protected:
    PortalClient client;
};


#endif //NEWS_SERVICE_PORTALINTERFACE_H
