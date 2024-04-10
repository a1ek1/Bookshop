#include "../Header Files/Product.h"

Product::Product() : quantity(0), ISBN(0), article(0), price(0.0), pricingStrategy(nullptr) {}

Product::Product(string title, int quantity, string author, int ISBN, int article, double price, const PricingStrategy* strategy)
        : title(move(title)), quantity(quantity), author(move(author)), ISBN(ISBN), article(article), price(price), pricingStrategy(strategy) {
    this->fprice = price;
}

void Product::SetQuantity(int number) {
    quantity = number;
}

int Product::GetQuantity() const {
    return quantity;
}

int Product::GetISBN() const {
    return ISBN;
}

int Product::GetArticle() const {
    return article;
}

double Product::GetPrice() const {
    return price;
}

string Product::GetName() const {
    return title;
}

void Product::GetInform() const {
    cout << "Title: " << title << "\nAuthor: " << author << "\nISBN: " << ISBN << "\nArticle: " << article << "\nQuantity: " << quantity << "\nPrice: $" << GetPriceWithDiscount() << endl;
}

string Product::GetAuthor() const {
    return author;
}


//Lab16
void Product::SetPricingStrategy(const PricingStrategy* strategy) {
    pricingStrategy = strategy;
    price = this->GetPriceWithDiscount();
}

double Product::GetPriceWithDiscount() const {
    if (pricingStrategy != nullptr) {
        // Если установлена стратегия, применяем ее к текущей цене
        return pricingStrategy->applyDiscount(price);
    } else {
        // Возвращаем текущую цену, если стратегия не установлена
        return price;
    }
}

void Product::CancelSale() {
    this->pricingStrategy = nullptr;
    this->price = fprice;
}
