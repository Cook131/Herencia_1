//Ejercicio Herencia (Vertice o Punto), Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250


#include <iostream>
#include <string>

using namespace std;
#pragma once

class Punto
{
    double x, y; //Attributes that make up a Point (coordinates)

    public:
        Punto(double x, double y): x(x), y(y){}; //Input Constructor
        Punto(const Punto &p): x(p.x), y(p.y){}; //Copy Constructor
        Punto()=default; //Constructor default
        Punto(double x): x(x), y(0){}; //Constructor that reiceves only x, y is always at 0 (no elevation)

        void setX(double x){ this->x=x; }
        void setY(double y){ this->y=y; }
        // normal getters
        double getX(){ return x; }
        double getY(){ return y; }
        //normal getters
        
        void imprimePunto(); 
};


void Punto::imprimePunto()
{
    cout<<"Las coordenadas son: ("<< x << "," << y <<")"<<endl; //X and Y prints
}
