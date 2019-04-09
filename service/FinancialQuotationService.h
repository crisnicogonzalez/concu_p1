#ifndef NEWS_SERVICE_COINREPORTER_H
#define NEWS_SERVICE_COINREPORTER_H


#include "../ipc/FifoEscritura.h"
#include "../ipc/FifoLectura.h"
#include "../utils/Constants.h"
#include "../dto/FinancialQuotationDTO.h"
#include "Service.h"
#include "../serializer/FinancialQuotationSerializer.h"
#include <map>

using namespace std;

class FinancialQuotationService :public Service {
public:
    FinancialQuotationService():requestsChannel(KEY_REQUEST_SENDER_CHANNEL_QUOTE){
        requestsChannel.abrir();
    };
    ~FinancialQuotationService();
    void init();
    void listen();

protected:
    map<string,FifoEscritura> responseChannelById;
    FifoLectura requestsChannel;
    map<string,FinancialQuotationDTO> financialQuotations;
    FinancialQuotationSerializer serializer;
};


#endif //NEWS_SERVICE_COINREPORTER_H
