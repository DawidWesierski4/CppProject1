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

Complex::~Complex()
{
	std::cout << "Destruktor realis: " << this->re << ", imaginalis: " << this->im << std::endl;
}

Complex::Complex(double re, double im) 
{
	this->re = re;
	this->im = im;
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
	out << "re: " << a.re << ", im: " << a.im << std::endl;
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

