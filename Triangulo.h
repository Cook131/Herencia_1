#include <iostream>
#include <string>
#include "Figura.h"

using namespace std;

class Triangulo: public Figura
{
    public:
    
    Triangulo() = default;
    Triangulo(string nombre, int lengthPunto, Punto p1,Punto p2,Punto p3): Figura("Triangulo", 3)
    {
        list<Punto> listaPuntos;
        listaPuntos.push_front(p1);
        listaPuntos.push_front(p2);
        listaPuntos.push_front(p3);
    };
    Triangulo(const Triangulo &t): Figura(t){};
    ~Triangulo(){};

    int calcularArea(){};
    int calcularPerimetro();
    void imprimeFigura() override;
};

int Triangulo::calcularArea()
{
    int area;
    list<Punto> listaPuntos = getPuntos();
    Punto p1 = listaPuntos.front();
    listaPuntos.pop_front();
    Punto p2 = listaPuntos.front();
    listaPuntos.pop_front();
    Punto p3 = listaPuntos.front();
    listaPuntos.pop_front();

    area = (p1.getX()*(p2.getY()-p3.getY()) + p2.getX()*(p3.getY()-p1.getY()) + p3.getX()*(p1.getY()-p2.getY()))/2;
    return area;
}
