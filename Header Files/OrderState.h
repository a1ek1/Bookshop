//
// Created by oleg on 19.11.2023.
//

#ifndef BOOKSHOP_ORDERSTATE_H
#define BOOKSHOP_ORDERSTATE_H


#include "Order.h"

class OrderState {
public:
    virtual void ShowStatus(Order* order) = 0;
};

// Конкретное состояние "Создан"
class CreatedOrderState : public OrderState {
public:
    void ShowStatus(Order* order) override;
};

void CreatedOrderState::ShowStatus(Order *order) {
    cout << "Order created";
}

// Конкретное состояние "Завершен"
class CompletedOrderState : public OrderState {
public:
    void ShowStatus(Order* order) override;
};

void CompletedOrderState::ShowStatus(Order *order) {
    cout << "Order ended";
}

#endif //BOOKSHOP_ORDERSTATE_H
