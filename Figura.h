//Ejercicio Herencia (Figura Base), Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250

#include <iostream>
#include <string>
#include <list>
#include <cmath>
//system inclusions

#include "Punto.h"
//class inclusion

using namespace std;
#pragma once
//more than one use

class Figura
{
    list<Punto> lpuntos;

    int lengthList;
    string nombre;
    public:
        Figura()=default;
        Figura(string nombre, int lengthList): nombre(nombre), lengthList(lengthList){};
        Figura(string nombre, int lengthList, list<Punto> lpuntos): nombre(nombre), lengthList(lengthList), lpuntos(lpuntos){};
        Figura(const Figura &f): nombre(f.nombre), lengthList(f.lengthList), lpuntos(f.lpuntos){};
        ~Figura(){};
        
        void setPunto(Punto p){lpuntos.push_front(p);}
        void setNombre(string nombre){ this->nombre=nombre; }
        void setLengthList(int lengthList){ this->lengthList=lengthList; }

        list<Punto> getPuntos(){ return lpuntos; } 
        string getNombre(){ return nombre; }
        int getLengthList(){ return lengthList; }
        
        int calcularDistancia(Punto, Punto);
        virtual void imprimeFigura();

};

void Figura::imprimeFigura()
{
    cout << "- - - - - - - - - - - -" << endl;
    cout  <<"Nombre de la figura: "<< nombre << endl;
    cout <<"Cantidad de vectores: "<< lengthList << endl;
    
    list <Punto> listaOrdenada (lpuntos);
            
    listaOrdenada.sort([] (Punto punto1, Punto punto2){
        if (punto1.getX() == punto2.getX())
        {
            return punto1.getY() < punto2.getY();
        } else 
        {
        return punto1.getX() < punto2.getX();
        }
    });
    cout << "Puntos: " << endl;
    for ( auto obj : listaOrdenada) 
    {
        int x = obj.getX();
        int y = obj.getY();
        cout << "(" << x << ',' << y << ")" << endl;
    }
    
}

int Figura::calcularDistancia(Punto p1, Punto p2)
{
    int distancia = sqrt( pow((p2.getX()-p1.getX()),2) + pow((p2.getY()-p1.getY()),2) );
    return distancia;
}
