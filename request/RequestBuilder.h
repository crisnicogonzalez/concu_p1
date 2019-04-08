//
// Created by cristiangonzalez on 06/04/19.
//

#ifndef NEWS_SERVICE_REQUESTBUILDER_H
#define NEWS_SERVICE_REQUESTBUILDER_H


#include "Request.h"

class RequestBuilder {
public:
    RequestBuilder* setMethod(HTTPMethod method);
    RequestBuilder* setResource(Resource resource);
    RequestBuilder* setResourceId(std::string id);
    RequestBuilder* setClientId(string clientId);
    RequestBuilder* setBody(string body);
    Request getResult();

protected:
    Request requestInformation;
};


#endif //NEWS_SERVICE_REQUESTBUILDER_H
