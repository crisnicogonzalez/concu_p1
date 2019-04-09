#ifndef NEWS_SERVICE_FINANCIALQUOTATIONCLIENT_H
#define NEWS_SERVICE_FINANCIALQUOTATIONCLIENT_H


#include "Client.h"
#include "../utils/Constants.h"


using namespace std;

class FinancialQuotationClient: public Client {
public:
    FinancialQuotationClient():Client(),requestSenderChannel(KEY_REQUEST_SENDER_CHANNEL_QUOTE){
        requestSenderChannel.abrir();
        builder.setResource(COTIZACION);
    }
    string get(string clientID,string id);
    string put(Request request);

protected:
    FifoEscritura requestSenderChannel;
    FifoLectura responseReaderChannel;
};


#endif //NEWS_SERVICE_FINANCIALQUOTATIONCLIENT_H
