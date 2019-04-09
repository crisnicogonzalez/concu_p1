#include "RequestSerializer.h"
#include <iostream>
#include <sstream>
#include <vector>


using namespace std;

string RequestSerializer::serialize(Request request) {

    ostringstream os;
    os << request.getMethod() << "," << request.getResource()
    << ","<< request.getResourceId() <<","<< request.getBody() <<","<<request.getClientId() <<";";
    const string s = os.str();
    cout << "[RequestSerializer] [INFO] serialize result:" << s << endl;
    return s;
}


Request RequestSerializer::deserialize(const std::string& requestSerialized) {
    cout << "[RequestSerializer][INFO] deserialize :" << requestSerialized << endl;
    vector<string> requestSplitted = split(requestSerialized,',');
    cout << "[RequestSerializer][DEBUG] request splitted"<< endl;
    const string httpMethod = requestSplitted[0];
    const string resource = requestSplitted[1];
    const string resourceId = requestSplitted[2];
    const HTTPMethod method = httpMethod == "0" ? GET : PUT;
    const Resource resourceEnum = resource == "0" ? CLIMA:COTIZACION;
    requestSplitted[4].pop_back();
    Request request;
    request.setMethod(method);
    request.setResource(resourceEnum);
    request.setResourceId(resourceId);
    request.setClientId(requestSplitted[4]);
    request.setBody(requestSplitted[3]);
    return request;

}

vector<string> RequestSerializer::split(const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}