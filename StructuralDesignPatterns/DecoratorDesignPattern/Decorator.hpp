#pragma once
#include "Coffee.hpp"

// ===== Base Decorator =====
class CoffeeDecorator : public Coffee
{
protected:
    Coffee* coffee;

public:
    CoffeeDecorator(Coffee* c);
};

// ===== Concrete Decorators =====
class MilkDecorator : public CoffeeDecorator
{
public:
    MilkDecorator(Coffee* c);
    std::string getDescriptions() override;
    int cost() override;
};

class SugarDecorator : public CoffeeDecorator
{
public:
    SugarDecorator(Coffee* c);
    std::string getDescriptions() override;
    int cost() override;
};