#pragma once

#include "PaymentStrategy.hpp"

class PaymentContext
{
private:
    PaymentStrategy* strategy;

public:
    PaymentContext(PaymentStrategy* s);
    void setStrategy(PaymentStrategy* s);
    void executePayment(int amount);
};