#include <iostream>
#include "../Header Files/User.h"
#include "../Header Files/Admin.h"
#include <stdexcept>

using namespace std;

string User::GetPassword() {
    return this->password;
};

string User::GetLogin() {
    return this->login;
};

int User::GetID() {
    return this->id;
};

string User::getFullName() const {
    return this->first_name + " " + second_name;
}

void User::ChangePassword(string newPassword) {
    this->password = newPassword;
};

void User::ChangeLastName(string newLastName) {
    this->second_name = newLastName;
};

void User::ChangeFirstName(string newFirstName) {
    this->first_name = newFirstName;
};

int User::Count = 0;

//
//int main(){
//
//    return 0;
//}