#ifndef BOOKSHOP_FISCALRECEIPT_H
#define BOOKSHOP_FISCALRECEIPT_H

#include <iostream>

// Интерфейс для фискального чека
class FiscalReceipt {
public:
    virtual void printReceipt() const = 0;
    virtual ~FiscalReceipt() = default;
};

// Наследник для чека за наличные
class CashReceipt : public FiscalReceipt {
public:
    void printReceipt() const override {
        std::cout << "Nalichka" << std::endl;
    }
};

// Наследник для чека за безналичные
class NonCashReceipt : public FiscalReceipt {
public:
    void printReceipt() const override {
        std::cout << "Beznal" << std::endl;
    }
};

#endif
