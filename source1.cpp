#include "Liczba.h"
#include <iostream>
using namespace std;


Liczba::Liczba(double re)
{
    cout<<"Konstruktor Liczba = "<<re<<"\n";
    this->re = re;
}


Liczba::~Liczba(void)
{
    std::cout<<re<<std::endl;
    std::cout<<modul()<<std::endl;
}

double Liczba::modul()
{
    //TODO 2
}


std::ostream & operator<<(std::ostream &out, Liczba &l)
{
out<<"Liczba rzeczywista: " << l.re<<"\n";
return out;
}

