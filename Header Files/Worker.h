#ifndef BOOKSHOP_WORKER_H
#define BOOKSHOP_WORKER_H

#pragma once
#include <iostream>
#include "User.h"

using namespace std;

class Worker : public User {
public:
    Worker(string first_name, string second_name, string login, string password)
            : User(first_name, second_name, login, password) {};
    Worker()= default;
    void Fake() override{};


    void GetDiscount();
    void AllOperations();
    void Discount();
    void Identify();
};


#endif
