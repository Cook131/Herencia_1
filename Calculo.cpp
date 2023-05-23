

#include <iostream>
#include <string>
#include "Punto.h"
#include "Figura.h"

using namespace std;

int main()
{
    Punto p(5, 8);
    p.imprimePunto();

    p.setX(0);
    p.setY(0);
    p.imprimePunto();

    p.setX(100);
    cout << p.getX()<< endl;

    return 0;
}