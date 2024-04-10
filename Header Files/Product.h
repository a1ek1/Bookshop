#ifndef BOOKSHOP_PRODUCT_H
#define BOOKSHOP_PRODUCT_H

#pragma once
#include <iostream>
#include "PricingStrategy.h"

using namespace std;


class Product {
private:
    string title;
    int quantity;
    string author;
    int ISBN;
    int article;
    double price;
    double fprice;

    // Стратегия ценообразования
    const PricingStrategy* pricingStrategy;

public:
    Product();

    Product(string title, int quantity, string author, int ISBN, int article, double price, const PricingStrategy* strategy);

    void SetQuantity(int number);

    void SetPrice(double newPrice){
        this->price = newPrice;
    }

    int GetQuantity() const;

    int GetISBN() const;

    int GetArticle() const;

    double GetPrice() const;

    string GetName() const;

    void GetInform() const;

    string GetAuthor() const;

    //Lab16
    // Установка новой стратегии ценообразования
    void SetPricingStrategy(const PricingStrategy* strategy);

    // Метод для получения цены с учетом текущей стратегии
    double GetPriceWithDiscount() const;

    void CancelSale ();
};


#endif //BOOKSHOP_PRODUCT_H
