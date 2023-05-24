#include <iostream>
#include <string>
#include <cmath>
#include "Figura.h"

using namespace std;


class Rectangulo: public Figura
{
    string nombre = "Rectangulo";
    int lengthLista = 4;
    public:
    list<Punto> r;
    
    Rectangulo() = default;
    Rectangulo(list<Punto> r): Figura("Rectangulo", 4, r), r(r){};

    Rectangulo(const Rectangulo &t): Figura(t){};
    ~Rectangulo(){};

    int calcularArea();
    int calcularPerimetro();
    //void imprimeFigura() override{};
};

int Rectangulo::calcularArea()
{
    int area;
    list<Punto> r = getPuntos();
    Punto p1 = r.front();
    r.pop_front();
    Punto p2 = r.front();
    r.pop_front();
    Punto p3 = r.front();
    r.pop_front();
    Punto p4 = r.front();
    r.pop_front();

    area = calcularDistancia(p1,p2) * calcularDistancia(p2,p3);
    return area;
}

int Rectangulo::calcularPerimetro()
{
    int perimetro;
    list<Punto> r = getPuntos();
    Punto p1 = r.front();
    r.pop_front();
    Punto p2 = r.front();
    r.pop_front();
    Punto p3 = r.front();
    r.pop_front();
    Punto p4 = r.front();
    r.pop_front();

    perimetro = 2 * (calcularDistancia(p1,p2) + calcularDistancia(p2,p3));
    return perimetro;
}
