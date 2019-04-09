#include <iostream>
#include "FinancialQuotationService.h"


static bool condition = true;


void FinancialQuotationService::listen() {
    std::cout << "Coin lister" << std::endl;
    while (condition){
        const string message = readOfChannel(requestsChannel);
        Request request = requestSerializer.deserialize(message);
        if(request.getMethod() == GET){
            FinancialQuotationDTO financialQuotation = financialQuotations[request.getResourceId()];
            string response = serializer.serialize(financialQuotation);
            if(client.sendToChannel("PS",request.getClientId(),"FQS",response)){
                cout << "[FinancialQuotationService] [INFO] sent message success" << endl;
            }

        }
    }


}

FinancialQuotationService::~FinancialQuotationService() {
    std::cout << "Coin destructor" << std::endl;
}

void FinancialQuotationService::init() {
    std::cout << "Coin init" << std::endl;

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

