#ifndef BOOKSHOP_ABSTRACTFACTORY_H
#define BOOKSHOP_ABSTRACTFACTORY_H

#include <iostream>
#include "FiscalReceipt.h"
#include "Coupon.h"

// Интерфейс абстрактной фабрики
class AbstractFactory {
public:
    virtual FiscalReceipt* createReceipt() const = 0;
    virtual Coupon* createCoupon() const = 0;
    virtual ~AbstractFactory() = default;
};

// Наследник фабрики для чека за наличные и купона 10%
class CashAndTenPercentFactory : public AbstractFactory {
public:
    FiscalReceipt* createReceipt() const override {
        return new CashReceipt();
    }

    Coupon* createCoupon() const override {
        return new TenPercentCoupon();
    }
};

// Наследник фабрики для чека за безналичные и купона 20%
class NonCashAndTwentyPercentFactory : public AbstractFactory {
public:
    FiscalReceipt* createReceipt() const override {
        return new NonCashReceipt();
    }

    Coupon* createCoupon() const override {
        return new TwentyPercentCoupon();
    }
};


#endif //BOOKSHOP_ABSTRACTFACTORY_H
