#ifndef LICZBY_H
#define LICZBY_H

#include <iostream>
#include <ostream>

class Wartosc_Liczbowa
{
    public:
    virtual double modul() = 0; //abs
    virtual void wypisz(std::ostream &out) = 0;
    virtual ~Wartosc_Liczbowa()
    {}
};

class Liczba : public Wartosc_Liczbowa
{
    double re; //czesc rzeczywista 

public:
    Liczba operator+(Liczba &right)
    {
        return Liczba (this->re+right.re);
    }

    double modul();
    Liczba(double re);
    ~Liczba(void);
    friend std::ostream & operator<<(std::ostream &out, Liczba &l);

    void wypisz(std::ostream &out) 
    {
        out<<*this;
    }
};

class Complex : public Wartosc_Liczbowa
{
    protected:
        double re;
        double im; //czesc urojona

    public:
        ~Complex(void);
        Complex(double re=0,double im=0);
        Complex operator +(Complex &);
        friend std::ostream & operator<< (std::ostream &out, Complex &l);
        double modul();

    void wypisz(std::ostream &out)
    {
        out<<*this;
    }
};

#endif /* LICZBY_H header gurad */
