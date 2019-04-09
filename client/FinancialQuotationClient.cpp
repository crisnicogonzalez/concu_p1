#include <iostream>
#include "FinancialQuotationClient.h"


string FinancialQuotationClient::get(string clientID,string id) {
    builder.setResourceId(id);
    builder.setResourceId(id)->setMethod(GET)->setClientId(clientID)->setResource(COTIZACION);
    Request request = builder.getResult();
    string requestSerialized = serializer.serialize(request);
    if(send(requestSenderChannel,requestSerialized)){
        cout << "[FinancialQuotationClient] [INFO] sent message correctly!"<<endl;
    }else{
        cout << "[FinancialQuotationClient] [ERROR] cannot send message!"<<endl;
    }

    return readOfChannel("PS",request.getClientId(),"FQS");
}


string FinancialQuotationClient::put(Request request) {
    string requestSerialized = serializer.serialize(request);
    if(send(requestSenderChannel,requestSerialized)){
        cout << "[WeatherClient] [INFO] request to update sent!" << endl;
    }
    return readOfChannel("PS",request.getClientId(),"FQS");
}