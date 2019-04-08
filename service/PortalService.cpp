#include <iostream>
#include "PortalService.h"
static const bool condition = true;
using namespace std;

void PortalService::init() {
    cout << "[INFO] init listen requests" << endl;
    listen();
}


void PortalService::answerRequest(string requestSerialized){
    cout << "[PortalService] Lei el dato del fifo: " << requestSerialized << endl;
    Request request = serializer.deserialize(requestSerialized);
    cout << "[PortalService] define resource" << endl;
    string response;
    if(request.getResource() == CLIMA){
        response = weatherClient.get(request.getClientId(),request.getResourceId());
    }else{
        response = financialQuotationClient.get(request.getClientId(),request.getResourceId());
    }

    cout << "[PortalService] [INFO] Service response: "<< response << endl;
    if(client.sendToChannel("PC",request.getClientId(),"PS",response)){
        cout << "[PortalService] [INFO] sent message!" << endl;
    }
}


void PortalService::listen() {
    requestChannel.abrir();

    while(condition){
        string message = readOfChannel(requestChannel);
        if(validateMessage(message)){
            answerRequest(message);
        }
    }
    requestChannel.cerrar();
}







