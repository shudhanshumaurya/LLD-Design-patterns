#pragma once
#include <string>

class Coffee{
    public :
        virtual std::string getDescriptions()=0;
        virtual int cost()=0;
        virtual ~Coffee(){} ;
};

class SimpleCoffee : public Coffee
{
    std::string getDescriptions() override ;
    int cost() override ;
};