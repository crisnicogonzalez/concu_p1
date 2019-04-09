#include <iostream>
#include <thread>
#include <chrono>
#include "PortalService.h"
static const bool condition = true;
using namespace std;

static int MILISECONDS_TO_SLEPP = 5000;

void PortalService::init() {
    cout << "[INFO] init listen requests" << endl;
    listen();
}


void PortalService::answerRequest(const string& requestSerialized){
    if (withDelay){
        std::this_thread::sleep_for(std::chrono::milliseconds(MILISECONDS_TO_SLEPP));
    }
    cout << "[PortalService] Lei el dato del fifo: " << requestSerialized << endl;
    Request request = serializer.deserialize(requestSerialized);
    cout << "[PortalService] [INFO ]define service" << endl;
    string response;
    if(request.getResource() == CLIMA){
        cout << "[PortalService] [INFO ] is weather service" << endl;
        if(request.getMethod() == GET){
            response = weatherClient.get(request.getClientId(),request.getResourceId());
        }
        response = weatherClient.put(request);
    }else{
        cout << "[PortalService] [INFO ] is financial quotation service" << endl;
        if(request.getMethod() == GET){
            response = financialQuotationClient.get(request.getClientId(),request.getResourceId());

        }
        response = financialQuotationClient.put(request);
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
}







