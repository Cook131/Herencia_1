

#include <iostream>
#include <string>
#include "Punto.h"
#include "Figura.h"

using namespace std;

int main()
{

    Punto p1(3,7);
    Punto p2(5,8);
    Punto p3(3, 9);
    list<Punto> l = {p1, p2, p3};
    Figura f("Triangulo", 3, l );
    f.imprimeFigura();

    return 0;
}