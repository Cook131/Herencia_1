#include <iostream>
#include <string>
#include "Figura.h"

using namespace std;


class Circulo: public Figura
{
    string nombre = "Circulo";
    int lengthLista = 2;
    public:
    list<Punto> l;
    
    Circulo() = default;
    Circulo(list<Punto> l): Figura(nombre, lengthLista, l)
    {

    };

    Circulo(const Circulo &t): Figura(t){};
    ~Circulo(){};

    int calcularArea(){};
    int calcularPerimetro();
    void imprimeFigura() override{};
};
