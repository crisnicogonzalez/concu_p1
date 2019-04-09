//
// Created by cristiangonzalez on 07/04/19.
//

#ifndef NEWS_SERVICE_FINANCIALQUOTATIONDTO_H
#define NEWS_SERVICE_FINANCIALQUOTATIONDTO_H


#include <string>
#include <iostream>

using namespace std;

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

    void setCoinId(string ID){
        coinId = ID;
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


    string getCoinId(){
        return coinId;
    }

    void print(){
        cout << "Moneda: "<< coinName << endl;
        cout << "Compra: "<< sale << endl;
        cout << "Venta: "<<purchase << endl;
    }

protected:
    double sale;
    double purchase;
    std::string coinName;
    string coinId;

};


#endif //NEWS_SERVICE_FINANCIALQUOTATIONDTO_H
