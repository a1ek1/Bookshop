#ifndef BOOKSHOP_USER_H
#define BOOKSHOP_USER_H
#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User {
public:
    User(string first_name, string second_name, string login, string password) {
        this->first_name = first_name;
        this->second_name = second_name;
        this->login = login;
        this->password = password;
        Count++;
        this->id = Count;
    }

    User()= default;

    virtual void Fake() = 0;

    static int Count;

    string GetLogin();

    string GetPassword();

    int GetID();

    string getFullName() const;

    void ChangePassword(string newPassword);

    void ChangeLastName(string newLastName);

    void ChangeFirstName(string newFirstName);

protected:
    int id;
    string first_name;
    string second_name;
    string login;
    string password;
};

#endif
