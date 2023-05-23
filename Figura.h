//Ejercicio Herencia, Lunes 22/05/23
// Jorge Luis Nájera Espinosa - A01424106
// Andrea Carolina Figueroa Orihuela - A01424250

#include <iostream>
#include <string>
#include <list>
#include "Punto.h"

using namespace std;
#pragma once

class Figura
{
    list<Punto> listaPuntos;

    int lengthList;
    string nombre;
    public:
        Figura() = default;
        Figura(string nombre, int lengthList): nombre(nombre), lengthList(lengthList){};
        Figura(string nombre, int lengthList, list<Punto> listaPuntos): nombre(nombre), lengthList(lengthList), listaPuntos(listaPuntos){};
        Figura(const Figura &f): nombre(f.nombre), lengthList(f.lengthList), listaPuntos(f.listaPuntos){};
        ~Figura(){};
        
        void setPunto(Punto p){listaPuntos.push_front(p);}
        void setNombre(string nombre){ this->nombre=nombre; }
        void setLengthList(int lengthList){ this->lengthList=lengthList; }

        list<Punto> getPuntos(){ return listaPuntos; } 
        string getNombre(){ return nombre; }
        int getLengthList(){ return lengthList; }
        
        virtual void imprimeFigura();

};

void Figura::imprimeFigura()
{
    cout << "- - - - - - - - - - - -" << endl;
    cout  <<"Nombre de la figura: "<< nombre << endl;
    cout <<"Cantidad de vectores: "<< lengthList << endl;
    
    list <Punto> listaOrdenada (listaPuntos);
            
    listaOrdenada.sort([] (Punto objeto1, Punto objeto2){
        if (objeto1.getX() == objeto2.getX())
        {
            return objeto1.getY() < objeto2.getY();
        } else 
        {
        return objeto1.getX() < objeto2.getX();
        }
    });
    cout << "Puntos: " << endl;
    for ( auto obj : listaOrdenada) 
    {
        int x = obj.getX();
        int y = obj.getY();
        cout << "(" << x << ',' << y << ")" << endl;
    }
    cout << "- - - - - - - - - - - -" << endl;
    
}