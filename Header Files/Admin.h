#ifndef BOOKSHOP_ADMIN_H
#define BOOKSHOP_ADMIN_H
#include "Worker.h"
#include "Product.h"
#include "Bookshop.h"

class Bookshop;
class Product;
class Order;

class Admin : public Worker {
public:
    Admin(string first_name, string second_name, string login, string password)
            : Worker(first_name, second_name, login, password) {};

    Admin()= default;
    void Fake() override{};


    void ChangePrice(Product* ex, double newPrice);
    void SetDirector(Bookshop* sh, string name);
    void SetAddress(Bookshop* ch, string address);
    void AddProduct(Bookshop* bs, Product* pr);
};


#endif //BOOKSHOP_ADMIN_H
