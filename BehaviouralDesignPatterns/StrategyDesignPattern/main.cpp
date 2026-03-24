#include "Context.hpp"
#include <iostream>

int main()
{
    PaymentStrategy* upi = new UpiPayment();
    PaymentStrategy* card = new CardPayment();

    PaymentContext context(upi);

    context.executePayment(100);

    context.setStrategy(card);
    context.executePayment(200);

    delete upi;
    delete card;

    return 0;
}