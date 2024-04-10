#include "Header Files/AdminProxy.h"
#include "Header Files/Order.h"
#include "Header Files/Product.h"

#include <iostream>

using namespace std;

int main() {
    // Создаем продукт с начальной ценой
    Product book("The Book Title", 10, "John Author", 123456789, 9876, 50.0, nullptr);

    // Выводим информацию о продукте
    cout << "Original Price: $" << book.GetPrice() << endl;

    // Применяем новогоднюю скидку
    NewYearDiscountStrategy newYearDiscount;
    book.SetPricingStrategy(&newYearDiscount);
    cout << "Price with New Year Discount: $" << book.GetPrice() << endl;

    book.CancelSale();
    // Применяем скидку для постоянного клиента
    LoyaltyDiscountStrategy loyaltyDiscount;
    book.SetPricingStrategy(&loyaltyDiscount);
    cout << "Price with Loyalty Discount: $" << book.GetPrice() << endl;

    return 0;
}




