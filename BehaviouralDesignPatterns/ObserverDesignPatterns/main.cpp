#include "Subject.hpp"
#include "Observer.hpp"

int main()
{
    Stock stock;

    Observer* m1 = new MobileObserver("User1");
    Observer* w1 = new WebObserver("User2");

    stock.attach(m1);
    stock.attach(w1);

    stock.setPrice(100);
    stock.setPrice(200);

    return 0;
}