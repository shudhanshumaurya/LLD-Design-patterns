#include "Context.hpp"

PaymentContext::PaymentContext(PaymentStrategy* s)
{
    strategy = s;
}

void PaymentContext::setStrategy(PaymentStrategy* s)
{
    strategy = s;
}

void PaymentContext::executePayment(int amount)
{
    strategy->pay(amount);
}