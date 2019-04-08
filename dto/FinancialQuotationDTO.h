//
// Created by cristiangonzalez on 07/04/19.
//

#ifndef NEWS_SERVICE_FINANCIALQUOTATIONDTO_H
#define NEWS_SERVICE_FINANCIALQUOTATIONDTO_H


#include <string>

class FinancialQuotationDTO {

public:

    void setSale(double newSale){
        sale = newSale;
    }
    void setPurchase(double newPurchase){
        purchase = newPurchase;
    }

    void setCoinName(std::string newCoinName){
        coinName = newCoinName;
    }

    double getSale(){
        return sale;
    }

    double getPurchase(){
        return purchase;
    }

    std::string getCoinName(){
        return coinName;
    }

protected:
    double sale;
    double purchase;
    std::string coinName;

};


#endif //NEWS_SERVICE_FINANCIALQUOTATIONDTO_H
