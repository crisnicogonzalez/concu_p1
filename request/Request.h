//
// Created by cristiangonzalez on 06/04/19.
//

#ifndef NEWS_SERVICE_REQUEST_H
#define NEWS_SERVICE_REQUEST_H


#include <string>
#include "Resource.h"
#include "HTTPMethod.h"


using namespace std;

class Request {


protected:
    HTTPMethod method;
    Resource resource;
    string resourceId;
    string body;
    string clientId;

public:
    void setMethod(HTTPMethod newMethod);
    void setResource(Resource newResource);
    void setResourceId(std::string newId);
    void setBody(std::string newBody);
    void setClientId(string newClientId);
    HTTPMethod getMethod();
    Resource getResource();
    string getResourceId();
    string getBody();
    string getClientId();
    const void print();
};


#endif //NEWS_SERVICE_REQUEST_H
