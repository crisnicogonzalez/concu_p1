#include <utility>
#include <iostream>
#include "PortalClient.h"

using namespace std;


void PortalClient::get(Resource resource, std::string resourceId) {
    cout << "[PortalClient] [INFO] GET Resource" << std::endl;
    builder.setResource(resource)->setResourceId(move(resourceId))->setMethod(GET)->setClientId(to_string(getppid()));
    Request request = builder.getResult();
    cout << "[PortalClient] [INFO] Request" << endl;
    request.print();
    string requestSerialized =  serializer.serialize(request);
    if(send(requestChannel,requestSerialized)){
        cout << "[PortalClient] [INFO] sent message correctly";
        string message = readOfChannel("PC",request.getClientId(),"PS");
        if(resource == CLIMA){
            weatherSerializer.deserialize(message).print();
        }
    }else{
        cout << "[PortalClient] [ERROR] cannot send message";
    }
}
