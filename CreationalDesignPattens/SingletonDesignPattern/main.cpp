#include "Singleton.hpp"

int main()
{
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();

    Singleton* s2 = Singleton::getInstance();

    if (s1 == s2)
    {
        std::cout << "Same instance\n";
    }

    return 0;
}