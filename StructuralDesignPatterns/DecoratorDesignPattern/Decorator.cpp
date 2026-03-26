#include "Decorator.hpp"

// ===== Base Decorator =====
CoffeeDecorator::CoffeeDecorator(Coffee* c)
{
    coffee = c;
}

// ===== Milk =====
MilkDecorator::MilkDecorator(Coffee* c) : CoffeeDecorator(c) {}

std::string MilkDecorator::getDescriptions()
{
    return coffee->getDescriptions() + ", Milk";
}

int MilkDecorator::cost()
{
    return coffee->cost() + 20;
}

// ===== Sugar =====
SugarDecorator::SugarDecorator(Coffee* c) : CoffeeDecorator(c) {}

std::string SugarDecorator::getDescriptions()
{
    return coffee->getDescriptions() + ", Sugar";
}

int SugarDecorator::cost()
{
    return coffee->cost() + 10;
}