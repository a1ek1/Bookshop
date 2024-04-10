#ifndef BOOKSHOP_BOOKSHOP_H
#define BOOKSHOP_BOOKSHOP_H

#include <iostream>
#include "User.h"
#include "Admin.h"
#include "Order.h"
#include <vector>

using namespace std;

class Order;
class Product;

class Bookshop {
private:
    string director;
    string address;
    string title;
    vector<Order*> orders;
    vector<Product*> products;

    // Приватный статический член класса для хранения экземпляра
    static Bookshop* instance;

    // Приватный конструктор и деструктор, чтобы предотвратить создание нескольких экземпляров
    Bookshop();
    ~Bookshop();

public:
    // Статический метод для получения экземпляра класса
    static Bookshop* getInstance();

    friend class Admin;
    friend class Order;

    void AddOrder(Order* ord);
    void ShowOrders();
    void ShowProducts();
};

#endif // BOOKSHOP_BOOKSHOP_H
