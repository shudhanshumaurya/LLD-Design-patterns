#include "PaymentStrategy.hpp"
#include <iostream>

void UpiPayment::pay(int amount)
{
    std::cout << "Paid " << amount << " using UPI\n";
}

void CardPayment::pay(int amount)
{
    std::cout << "Paid " << amount << " using Card\n";
}

void NetBankingPayment::pay(int amount)
{
    std::cout << "Paid " << amount << " using NetBanking\n";
}