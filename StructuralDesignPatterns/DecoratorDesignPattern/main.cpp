#include "Decorator.hpp"
#include <iostream>

int main()
{
    Coffee *c =new SimpleCoffee();

    c = new MilkDecorator(c);
    c = new SugarDecorator(c);

    std::cout<<c->getDescriptions() <<"\n" << "The cost of coffee ->" << c->cost();
    
}