#include <iostream>
#include <string>
#include <cmath>
#include "Figura.h"

using namespace std;


class Circulo: public Figura
{
    string nombre = "Circulo";
    int lengthLista = 2;
    public:
    list<Punto> c;
    
    Circulo() = default;
    Circulo(list<Punto> c): Figura("Circulo", 2, c), c(c){};

    Circulo(const Circulo &t): Figura(t){};
    ~Circulo(){};

    int calcularArea();
    int calcularPerimetro();
    void imprimeFigura() override{};
};

int Circulo::calcularArea()
{
    int area;
    list<Punto> c = getPuntos();
    Punto p1 = c.front();
    c.pop_front();
    Punto p2 = c.front();
    c.pop_front();

    area = 3.1416 * pow(calcularDistancia(p1,p2),2);
    return area;
}

int Circulo::calcularPerimetro()
{
    int perimetro;
    list<Punto> c = getPuntos();
    Punto p1 = c.front();
    c.pop_front();
    Punto p2 = c.front();
    c.pop_front();

    perimetro = 2 * 3.1416 * calcularDistancia(p1,p2);
    return perimetro;
}