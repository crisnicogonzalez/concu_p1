//
// Created by cristiangonzalez on 06/04/19.
//

#include <iostream>
#include "Request.h"

using namespace std;

HTTPMethod Request::getMethod() {
    return method;
}


Resource Request::getResource() {
    return resource;
}

std::string Request::getResourceId() {
    return resourceId;
}

std::string Request::getBody() {
    return body;
}

string Request::getClientId() {
    return clientId;
}
void Request::setResourceId(std::string id) {
    resourceId = id;
}

void Request::setResource(Resource newResource) {
    resource = newResource;
}

void Request::setMethod(HTTPMethod newMethod) {
    method = newMethod;
}


void Request::setBody(std::string newBody) {
    body = newBody;
}

void Request::setClientId(string newClientId) {
    clientId = newClientId;
}


void const Request::print() {
    const string httpMethod = method == GET ? "GET":"PUT";
    const string resourceS = resource == CLIMA ? "weather": "financial_quotation";
    const string id = resourceId;
    cout << httpMethod << " /" <<resourceS<<"?id="<<id<<"        clientId:"<<clientId;
}