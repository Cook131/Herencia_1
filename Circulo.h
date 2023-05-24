//Ejercicio Herencia (Circulo), Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250

#include <iostream>
#include <string>
#include <cmath>
//system inclusions

using namespace std;


class Circulo: public Figura
{
    string nombre = "Circulo";
    int lengthLista = 2;
    //private variables used in the same methods as "Figura"
    public:
    list<Punto> c;
    //for use in other "Circulo" objects
    
    Circulo() = default;
    Circulo(list<Punto> c): Figura("Circulo", 2, c), c(c){};
    //basic constructor with parent class
    Circulo(const Circulo &t): Circulo(t){};
    //copy constructor
    ~Circulo(){};
    //emtpy destructor

    int calcularArea();
    int calcularPerimetro();
    //void imprimeFigura() override{};     Non-used void print 
};

int Circulo::calcularArea()
{
    int area;
    list<Punto> c = getPuntos();
    Punto p1 = c.front();
    c.pop_front();
    Punto p2 = c.front();
    c.pop_front();
    //construction and destruction of list in this function in order to get "Puntos" out 

    area = 3.1416 * pow(calcularDistancia(p1,p2),2);
    //Function of "Figura" for calculating distance from "Punto" to "Punto of the list with Pythagorean Theorem
    //formula of Circle area
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
    //Formula of circle perimeter
    return perimetro;
}
