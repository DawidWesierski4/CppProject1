#include "Liczba.h"
#include <iostream>


Liczba::Liczba(double re)
{
    std::cout<<"Konstruktor Liczba = "<<re<<"\n";
    this->re = re;
}


Liczba::~Liczba(void)
{

    std::cout<<"this object re value is:"<<this->re<<std::endl;
}

double Liczba::modul()
{
    return this->re;
}


std::ostream & operator<<(std::ostream &out, Liczba &l)
{
    out<<"Liczba rzeczywista: " << l.re<<"\n";
    return out;
}

int main()
{
    Liczba* obj1 = new Liczba(1);
    Liczba* obj2 = new Liczba(2);

    std::cout<<"this: "<<*obj2<<std::endl;
    std::cout<<"this: "<<*obj1<<std::endl;

    delete(obj1);
    delete(obj2);

    return 0;
}

