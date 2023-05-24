//Ejercicio Herencia (Rectangulo), Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250

#include <iostream>
#include <string>
#include <cmath>
//system inclussions
#include "Figura.h"
//class inclussion

using namespace std;


class Rectangulo: public Figura
//public inheritance
{
    string nombre = "Rectangulo";
    int lengthLista = 4;
    //basic private variables
    public:
    list<Punto> r;
    //public list usable by other "Rectangulo"'s
    
    Rectangulo() = default;
    Rectangulo(list<Punto> r): Figura("Rectangulo", 4, r), r(r){};
    //Constructor to input the lis of "Punto"'s
    
    Rectangulo(const Rectangulo &t): Figura(t){};
    //copy constructor
    ~Rectangulo(){};
    //empty destructor

    int calcularArea();
    int calcularPerimetro();
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
