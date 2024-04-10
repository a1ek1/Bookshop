#ifndef BOOKSHOP_CREATEUSER_H
#define BOOKSHOP_CREATEUSER_H

#include "User.h"
#include "Bookshop.h"
#include "Admin.h"
#include "Worker.h"

class Admin;
class Worker;

class CreateUser {
public:
    virtual User* create(const string& first_name, const string& second_name,
                         const string& login, const string& password) = 0;
};

class CreateAdmin : public CreateUser {
public:
    User* create(const string& first_name, const string& second_name,
                 const string& login, const string& password) override {
        return new Admin(first_name, second_name, login, password);
    }
};

class CreateStudent : public CreateUser {
public:
    User* create(const string& first_name, const string& second_name,
                 const string& login, const string& password) override {
        return new Worker(first_name, second_name, login, password);
    }
};
#endif
