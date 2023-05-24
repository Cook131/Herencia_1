//Ejercicio Herencia, Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250


#include <iostream>
#include <string>

using namespace std;
#pragma once

class Punto
{
    double x, y; //Atributos que componen a Punto (coordenadas)

    public:
        Punto(double x, double y): x(x), y(y){}; //Constructor que recibe ambos atributos (x,y)
        Punto(const Punto &p): x(p.x), y(p.y){}; //Constructor copia de Punto
        Punto()=default; //Contructor default
        Punto(double x): x(x), y(0){}; //Contructor que recibe el atributo x y por define y = 0;

        void setX(double x){ this->x=x; } // Setter de atributos de Punto
        void setY(double y){ this->y=y; }
        double getX(){ return x; } //Getters de atributos de Punto
        double getY(){ return y; }

        
        void imprimePunto(); //Firma de metodo para mostrar datos de Punto
};


void Punto::imprimePunto()
{
    cout<<"Las coordenadas son: ("<< x << "," << y <<")"<<endl; //Impresion de x y y
}