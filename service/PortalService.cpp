#include <iostream>
#include <thread>
#include <chrono>
#include "PortalService.h"
#include "../signal/SIGINT_Handler.h"
#include "../signal/SignalHandler.h"

static const bool condition = true;
using namespace std;

static int MILISECONDS_TO_SLEEP = 5000;

void PortalService::init() {
    cout << "[INFO] init listen requests" << endl;
    listen();
}

PortalService::~PortalService() {
    cout << "[PortalService] [DEBUG] detroit" << endl;
    requestChannel.cerrar();
    requestChannel.eliminar();
}


void PortalService::answerRequest(const string& requestSerialized){
    if (withDelay){
        std::this_thread::sleep_for(std::chrono::milliseconds(MILISECONDS_TO_SLEEP));
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
    SIGINT_Handler sigint_handler;
    SignalHandler :: getInstance()->registrarHandler ( SIGINT,&sigint_handler );
    while(sigint_handler.getGracefulQuit() == 0){
        ReadResult result  = readOfChannel(requestChannel);
        if(result.isOk()){
            string message = result.getMessage();
            if(validateMessage(message)){
                if(concurrently){
                    if(fork() == 0){
                        answerRequest(message);
                        exit(0);
                    }
                }else{
                    answerRequest(message);
                }
            }
        }
    }
    SignalHandler::destruir();
}







