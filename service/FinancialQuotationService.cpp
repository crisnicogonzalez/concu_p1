#include <iostream>
#include "FinancialQuotationService.h"


void FinancialQuotationService::listen() {
    std::cout << "Coin lister" << std::endl;
}

FinancialQuotationService::~FinancialQuotationService() {
    std::cout << "Coin destructor" << std::endl;
}

void FinancialQuotationService::init() {
    std::cout << "Coin init" << std::endl;
    string buffer;
    std::cout << "[DEBUG] Listen request" << std::endl;
    getline(cin,buffer);


}

