#pragma once

class PaymentStrategy
{
public:
    virtual void pay(int amount) = 0;
    virtual ~PaymentStrategy() {}
};

// ===== Concrete Strategies =====

class UpiPayment : public PaymentStrategy
{
public:
    void pay(int amount) override;
};

class CardPayment : public PaymentStrategy
{
public:
    void pay(int amount) override;
};

class NetBankingPayment : public PaymentStrategy
{
public:
    void pay(int amount) override;
};
















