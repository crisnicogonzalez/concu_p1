#include "FinancialQuotationClient.h"


string FinancialQuotationClient::get(string clientID,string id) {
    builder.setResourceId(id);
    const Request request = builder.getResult();
    send(request);
}


void FinancialQuotationClient::put(string clientID,string id, double newFinancialQuotation) {
    builder.setMethod(PUT);
    builder.setResourceId(id);
    const Request request = builder.getResult();
}