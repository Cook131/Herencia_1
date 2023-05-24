//Ejercicio Herencia (Ejecutable), Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250

#include <iostream>
#include <string>
//System inclusions

#include "Circulo.h"
#include "Rectangulo.h"
#include "Triangulo.h"
//class inclusions

using namespace std;

void imprime_clase(Figura &figura){ figura.imprimeFigura(); }                   //Caro q es esto?


int main()
{
    Punto p1(3,7);
    Punto p2(5,8);
    Punto p3(4,7);
    //Creations of "Punto"'s classes for testing
    list<Punto> l = {p1, p2, p3};
    Figura f("Triangulo", 3, l );
    //constructor of "Figura"
    f.imprimeFigura();
    double distancia = f.calcularDistancia(p1,p2);
    //original methods from "Figura"
    cout << "Distancia entre dos puntos: " << distancia << endl;

    Punto c1(0,0);
    Punto c2(0,1);
    list<Punto> p = {c1, c2};
    //creation of "Puntos" and list of them for "Circulo"
    Circulo c(p);
    c.imprimeFigura();
    //hereditary overran method
    double areaC = c.calcularArea();
    double perimetroC = c.calcularPerimetro();
    //original methods
    cout << "Area de mi circulo = " << areaC << endl;
    cout << "Perimetro de mi circulo = " << perimetroC << endl;

    Punto r1(0,0);
    Punto r2(4,2);
    Punto r3(4,0);
    Punto r4(0,2);
    list<Punto> R = {r1, r2, r3, r4};
    //creation of "Puntos" and list of them for "Rectangulo", uses more vertices
    Rectangulo r(R);
    r.imprimeFigura();
    //hereditary method
    double areaR = r.calcularArea();
    double perimetroR = r.calcularPerimetro();
    //original methods
    cout << "Area de mi rectangulo = " << areaR << endl;
    cout << "Perimetro de mi rectangulo = " << perimetroR << endl;

    Punto t1(2,3);
    Punto t2(4,0);
    Punto t3(0,0);
    list<Punto> T = {t1, t2, t3};
    Triangulo t(T);
    //construtor of "Triangulo"
    t.imprimeFigura();
    //hereditary method
    double areaT = t.calcularArea();
    double perimetroT = t.calcularPerimetro();
    //original methods
    cout << "Area de mi triangulo = " << areaT << endl;
    cout << "Perimetro de mi triangulo = " << perimetroT << endl;

    return 0;
}
