//
// Created by cristiangonzalez on 08/04/19.
//

#include <sstream>
#include <vector>
#include "FinancialQuotationSerializer.h"


FinancialQuotationDTO FinancialQuotationSerializer::deserialize(string financialQuotationSerialized){
    FinancialQuotationDTO financialQuotation;
    vector<string> requestSplitted = split(financialQuotationSerialized,'-');
    financialQuotation.setCoinName(requestSplitted[0]);
    financialQuotation.setSale(atof(requestSplitted[1].c_str()));
    financialQuotation.setPurchase(atof(requestSplitted[2].c_str()));
    return financialQuotation;
}


string FinancialQuotationSerializer::serialize(FinancialQuotationDTO financialQuotation) {
    ostringstream os;
    os << financialQuotation.getCoinName() <<"-" << financialQuotation.getSale() <<"-"<< financialQuotation.getPurchase() << ";";
    return os.str();
}


vector<string> FinancialQuotationSerializer::split(const std::string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}
