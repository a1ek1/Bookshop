#ifndef BOOKSHOP_PRICINGSTRATEGY_H
#define BOOKSHOP_PRICINGSTRATEGY_H

// Интерфейс стратегии ценообразования
class PricingStrategy {
public:
    virtual double applyDiscount(double price) const = 0;
    virtual ~PricingStrategy() = default;
};

// Конкретная стратегия для новогодней скидки
class NewYearDiscountStrategy : public PricingStrategy {
public:
    double applyDiscount(double price) const override {
        // Применяем новогоднюю скидку -10%
        return price * 0.9;
    }
};

// Конкретная стратегия для скидки постоянного клиента
class LoyaltyDiscountStrategy : public PricingStrategy {
public:
    double applyDiscount(double price) const override {
        // Применяем скидку постоянного клиента -20%
        return price * 0.8;
    }
};

#endif //BOOKSHOP_PRICINGSTRATEGY_H
