#ifndef BOOKSHOP_COUPON_H
#define BOOKSHOP_COUPON_H

#include <iostream>

// Интерфейс для купона
class Coupon {
public:
    virtual void applyDiscount() const = 0;
    virtual ~Coupon() = default;
};

// Наследник для купона 10%
class TenPercentCoupon : public Coupon {
public:
    void applyDiscount() const override {
        std::cout << "10%." << std::endl;
    }
};

// Наследник для купона 20%
class TwentyPercentCoupon : public Coupon {
public:
    void applyDiscount() const override {
        std::cout << "20%." << std::endl;
    }
};

#endif //BOOKSHOP_COUPON_H
