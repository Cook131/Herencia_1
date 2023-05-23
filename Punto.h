//Ejercicio Herencia, Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250


#include <iostream>
#include <string>

using namespace std;
#pragma once

class Punto
{
    double x, y;

    public:
        Punto(double x, double y): x(x), y(y){};
        Punto(const Punto &p): x(p.x), y(p.y){};
        Punto()=default;
        Punto(double x): x(x), y(0){};

        void setX(double x){ this->x=x; }
        void setY(double y){ this->y=y; }
        double getX(){ return x; }
        double getY(){ return y; }
        void imprimePunto();
};

void Punto::imprimePunto()
{
    cout<<"Las coordenadas son: ("<< x << "," << y <<")"<<endl;
}