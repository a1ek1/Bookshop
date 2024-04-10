#ifndef BOOKSHOP_ORDER_H
#define BOOKSHOP_ORDER_H

#pragma once
#include "Product.h"
#include "Bookshop.h"
#include <vector>
#include <ctime>
#include <iostream>

using namespace std;

class Bookshop;
class OrderState;

class Order {
private:
    vector <Product*> current_products; //список продуктов в текущем заказе
    string time;  //время создания заказа
    int total_count; //количество продуктов в заказе
    int number; //номер заказа
    bool state;  // состояние заказа

public:
    friend class Bookshop;

    static int Count;

    void ShowOrder(); //выводит весь заказ

    void AddtoCart(Bookshop* bs, int art);  //добавление в заказ по артикулу

    double FinalSum(); //выводит сумму заказа

    Order();

    string GetDate(); //получает дату

    int GetTotalCount();  //количество товаров в заказе

    void OrderShortInfo();  //выводит номер, дату заказа и количество товаров с итоговой суммой

    void EndOrder(Bookshop* b);  //заносит заказ в базу данных магазина

    void ShowStatus() ;
};

#endif //BOOKSHOP_ORDER_H
