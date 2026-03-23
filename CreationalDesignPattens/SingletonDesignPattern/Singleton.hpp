#include<iostream>

#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton 
{
    private :
     
        Singleton();  // prevent object creation 
        static Singleton* instance;
   
    public :

        // Delete copy constructor & assignment (VERY IMPORTANT)
        Singleton(const Singleton&) = delete ;
        Singleton& operator=(const Singleton&) = delete ;

        static Singleton* getInstance();

        void showMessage();

};

#endif
