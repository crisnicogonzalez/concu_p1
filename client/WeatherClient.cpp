#include <iostream>
#include <sstream>
#include "WeatherClient.h"

using namespace std;

string WeatherClient::get(string clientID,string id) {
    cout << "[WeatherClient] [INFO] GET clientID: "<<clientID << "resourceId: "<<id<<endl;
    builder.setResourceId(id)->setMethod(GET)->setClientId(clientID)->setResource(CLIMA);
    Request request = builder.getResult();
    string requestSerialized = serializer.serialize(request);


    if(send(requestSenderChannel,requestSerialized)){
        cout << "[WeatherClient] [INFO] sent message correctly!"<<endl;
    }

    return readOfChannel("PS",request.getClientId(),"WS");
}


string WeatherClient::put(Request request) {
    string requestSerialized = serializer.serialize(request);
    if(send(requestSenderChannel,requestSerialized)){
        cout << "[WeatherClient] [INFO] request to update sent!" << endl;
    }
    return readOfChannel("PS",request.getClientId(),"WS");
}







