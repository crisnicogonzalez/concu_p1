//
// Created by cristiangonzalez on 08/04/19.
//

#ifndef CONCU_P1_FINANCIALQUOTATIONSERIALIZER_H
#define CONCU_P1_FINANCIALQUOTATIONSERIALIZER_H


#include "../dto/FinancialQuotationDTO.h"
using namespace std;

class FinancialQuotationSerializer {
public:
    string serialize(FinancialQuotationDTO financialQuotation);
    FinancialQuotationDTO deserialize(string financialQuotationSerialized);

protected:
    vector<string> split(const std::string &s, char delim);
};


#endif //CONCU_P1_FINANCIALQUOTATIONSERIALIZER_H
