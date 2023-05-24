//Ejercicio Herencia (Rectangulo), Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250

#include <iostream>
#include <string>
#include <cmath>
//system inclussions



class Triangulo: public Figura
{
    list<Punto> t;

    public:
    
    Triangulo()=default;
    Triangulo(list<Punto> t): Figura("Triangulo", 3, t), t(t){};
    Triangulo(const Triangulo &f): Figura(f){};

    ~Triangulo(){};

    int calcularArea();
    int calcularPerimetro();
    //void imprimeFigura() override{};
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

int Triangulo::calcularPerimetro()
{
    int perimetro;
    list<Punto> listaPuntos = getPuntos();
    Punto p1 = listaPuntos.front();
    listaPuntos.pop_front();
    Punto p2 = listaPuntos.front();
    listaPuntos.pop_front();
    Punto p3 = listaPuntos.front();
    listaPuntos.pop_front();

    perimetro = calcularDistancia(p1,p2) + calcularDistancia(p2,p3) + calcularDistancia(p1,p3);
    return perimetro;
}
