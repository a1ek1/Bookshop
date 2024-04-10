#include "../Header Files/Bookshop.h"

// Инициализация статического члена класса
Bookshop* Bookshop::instance = nullptr;

Bookshop::Bookshop() {
    // Инициализация полей класса
}

Bookshop::~Bookshop() {
    // Освобождение ресурсов, если необходимо
}

Bookshop* Bookshop::getInstance() {
    if (instance == nullptr) {
        instance = new Bookshop();
    }
    return instance;
}

void Bookshop::AddOrder(Order* ord) {
    orders.push_back(ord);
}

void Bookshop::ShowOrders() {
    for(int i = 0; i < this->orders.size(); i++){
        this->orders[i]->OrderShortInfo();
    }

}

void Bookshop::ShowProducts() {
    for (int i = 0; i < this->products.size(); i++){
        this->products[i]->GetInform();
    }
}
