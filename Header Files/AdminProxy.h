#ifndef BOOKSHOP_ADMIN_PROXY_H
#define BOOKSHOP_ADMIN_PROXY_H

#include "Admin.h"
#include <iostream>
#include <string>

using namespace std;

class AdminProxy {
public:
    AdminProxy() : admin(nullptr) {}

    void Login() {
        cout << "Enter login: ";
        cin >> login;
        cout << "Enter password: ";
        cin >> password;
    }

    bool Authenticate() {
        // Здесь может быть логика проверки логина и пароля
        // В данном случае просто сравниваем с предопределенными значениями
        if (login == "admin" && password == "password") {
            admin = new Admin(); // Создаем объект Admin после успешной аутентификации
            return true;
        } else {
            cout << "Authentication failed." << endl;
            return false;
        }
    }

    void ChangePrice(Product* ex, double newPrice) {
        if (admin) {
            admin->ChangePrice(ex, newPrice);
        } else {
            cout << "Authentication required." << endl;
        }
    }

    void SetDirector(Bookshop* sh, string name) {
        if (admin) {
            admin->SetDirector(sh, name);
        } else {
            cout << "Authentication required." << endl;
        }
    }

    void SetAddress(Bookshop* ch, string address) {
        if (admin) {
            admin->SetAddress(ch, address);
        } else {
            cout << "Authentication required." << endl;
        }
    }

    void AddProduct(Bookshop* bs, Product* pr) {
        if (admin) {
            admin->AddProduct(bs, pr);
        } else {
            cout << "Authentication required." << endl;
        }
    }

    ~AdminProxy() {
        delete admin; // Освобождаем ресурсы при уничтожении объекта AdminProxy
    }

private:
    Admin* admin;
    string login;
    string password;
};

#endif //BOOKSHOP_ADMIN_PROXY_H
