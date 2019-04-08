#include <utility>
#include "RequestBuilder.h"


Request RequestBuilder::getResult() {
    return requestInformation;
}

RequestBuilder* RequestBuilder::setMethod(HTTPMethod method) {
    requestInformation.setMethod(method);
    return this;
}

RequestBuilder* RequestBuilder::setResource(Resource resource) {
    requestInformation.setResource(resource);
    return this;
}

RequestBuilder* RequestBuilder::setResourceId(std::string id) {
    requestInformation.setResourceId(std::move(id));
    return this;
}

RequestBuilder* RequestBuilder::setClientId(string clientId) {
    requestInformation.setClientId(clientId);
    return this;
}

RequestBuilder* RequestBuilder::setBody(string body) {
    requestInformation.setBody(body);
    return this;
}


