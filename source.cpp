#include <iostream>

class Wartosc_Liczbowa
{
    public:
    virtual double modul() = 0; //abs
    virtual void wypisz(std::ostream &out) = 0;
    virtual ~Wartosc_Liczbowa()
    {}
};

int main() {
    std::cout<<"wtf this works"<<std::endl;
}

