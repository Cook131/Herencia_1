

#include <iostream>
#include <string>
#include "Punto.h"
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

void imprime_clase(Figura &figura){ figura.imprimeFigura(); }


int main()
{
    Punto p1(3,7);
    Punto p2(5,8);
    Punto p3(4,7);
    list<Punto> l = {p1, p2, p3};
    Figura f("Triangulo", 3, l );
    f.imprimeFigura();
    double distancia = f.calcularDistancia(p1,p2);
    cout << "Distancia entre dos puntos: " << distancia << endl;

    Punto c1(0,0);
    Punto c2(0,1);
    list<Punto> p = {c1, c2};
    Circulo c(p);
    c.imprimeFigura();
    double areaC = c.calcularArea();
    double perimetroC = c.calcularPerimetro();
    cout << "Area de mi circulo = " << areaC << endl;
    cout << "Perimetro de mi circulo = " << perimetroC << endl;

    Punto r1(0,0);
    Punto r2(4,2);
    Punto r3(4,0);
    Punto r4(0,2);
    list<Punto> R = {r1, r2, r3, r4};
    Rectangulo r(R);
    r.imprimeFigura();
    double areaR = r.calcularArea();
    double perimetroR = r.calcularPerimetro();
    cout << "Area de mi rectangulo = " << areaR << endl;
    cout << "Perimetro de mi rectangulo = " << perimetroR << endl;

    Punto t1(2,3);
    Punto t2(4,0);
    Punto t3(0,0);
    list<Punto> T = {t1, t2, t3};
    Triangulo t(T);
    t.imprimeFigura();
    double areaT = t.calcularArea();
    double perimetroT = t.calcularPerimetro();
    cout << "Area de mi triangulo = " << areaT << endl;
    cout << "Perimetro de mi triangulo = " << perimetroT << endl;

    return 0;
}