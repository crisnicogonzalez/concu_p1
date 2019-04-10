#include <utility>

#include <iostream>
#include "FinancialQuotationService.h"
#include "../signal/SIGINT_Handler.h"
#include "../signal/SignalHandler.h"




void FinancialQuotationService::sendResponse(FinancialQuotationDTO financialQuotation, string clientId) {
    string response = serializer.serialize(std::move(financialQuotation));
    if(client.sendToChannel("PS",std::move(clientId),"FQS",response)){
        cout << "[FinancialQuotationService] [INFO] sent message success" << endl;
    }
}

void FinancialQuotationService::listen() {
    std::cout << "Coin lister" << std::endl;
    SIGINT_Handler sigint_handler;
    SignalHandler :: getInstance()->registrarHandler ( SIGINT,&sigint_handler );
    while (sigint_handler.getGracefulQuit() == 0){
        ReadResult result = readOfChannel(requestsChannel);
        if(result.isOk()){
            Request request = requestSerializer.deserialize(result.getMessage());
            if(request.getMethod() == GET){
                cout << "[FinancialQuotationService] [DEBUG] handle GET request" << endl;
                FinancialQuotationDTO financialQuotation = financialQuotations[request.getResourceId()];
                sendResponse(financialQuotation,request.getClientId());
            }else{
                cout << "[FinancialQuotationService] [DEBUG] handle PUT request" << endl;
                FinancialQuotationDTO financialQuotation = serializer.deserialize(request.getBody());
                FinancialQuotationDTO oldFinancialQuotation = financialQuotations[request.getResourceId()];
                financialQuotation.setCoinName(oldFinancialQuotation.getCoinName());
                financialQuotations[request.getResourceId()] = financialQuotation;
                FinancialQuotationDTO newFinancialQuotation = financialQuotations[request.getResourceId()];
                sendResponse(newFinancialQuotation,request.getClientId());
            }
        }
    }
    SignalHandler::destruir();


}

FinancialQuotationService::~FinancialQuotationService() {
    std::cout << "Coin destructor" << std::endl;
    requestsChannel.cerrar();
    requestsChannel.eliminar();
}

void FinancialQuotationService::init() {
    std::cout << "Coin init with pid: "<< getpid() << std::endl;
    std::cout << "[DEBUG] Listen request" << std::endl;
    FinancialQuotationDTO real;
    real.setCoinName("Real");
    real.setSale(10.56);
    real.setPurchase(11.76);

    FinancialQuotationDTO dolar;
    dolar.setCoinName("Dolar");
    dolar.setPurchase(42.83);
    dolar.setSale(44.83);

    FinancialQuotationDTO euro;
    euro.setCoinName("Euro");
    euro.setSale(48.47);
    euro.setPurchase(51.25);

    financialQuotations["1"] = real;
    financialQuotations["2"] = dolar;
    financialQuotations["3"] = euro;

    listen();
}

