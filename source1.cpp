#include "Liczba.h"
#include <iostream>
#include <math.h>


Liczba::Liczba(double re)
{
    std::cout<<"Konstruktor Liczba = "<<re<<"\n";
    this->re = re;
}


Liczba::~Liczba(void)
{

    std::cout<<"Destruktor Liczba:"<<this->re<<std::endl;
}

double Liczba::modul()
{
    return this->re;
}


std::ostream & operator<<(std::ostream &out, Liczba &l)
{
    out<<"Liczba rzeczywista: "<< l.re<<"\n";
    return out;
}

Complex::~Complex()
{
	std::cout << "Destruktor Complex re: " << this->re << ", im: " << this->im << std::endl;
}

Complex::Complex(double re, double im) 
{
	this->re = re;
	this->im = im;
	std::cout << "Konstruktor Complex re: " << this->re << ", im: " << this->im << std::endl;
}

Complex Complex::operator +(Complex & right) 
{
	return Complex(this->re + right.re, this->im + right.im);
}

double Complex::modul()
{
	return sqrt(im * im + re * re);
}

std::ostream & operator<< (std::ostream & out, Complex & a)
{
	out << "re: " << a.re << ", im: " << a.im << "\n";
	return out;
}

int main()
{
    Liczba obj1(1);
    Liczba obj2(2);
    Complex obj3(3,5);
    Complex obj4(4,6);
    int i;
    Wartosc_Liczbowa *egzmp[4] = {
        new Liczba(6),
        new Liczba(7),
        new Complex(8, 10),
        new Complex(9,20)
    };

    for (i = 0; i < 4; i++) {
        std::cout<<"-------------dyn "<<i<<"----------------------"<<std::endl;
		egzmp[i]->modul();
		(*egzmp[i]).wypisz(std::cout);
        std::cout<<egzmp[i]<<std::endl;
        delete(egzmp[i]);
    }

    std::cout<<"----------------------------------------------------------"<<std::endl;



    std::cout<<"----------------------------------------------------------"<<std::endl;

    return 0;
}

