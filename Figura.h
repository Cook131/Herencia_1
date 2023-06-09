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
    //private variables 
    public:
        Figura()=default;
        Figura(string nombre, int lengthList): nombre(nombre), lengthList(lengthList){};
        //non-listed constructor
        Figura(string nombre, int lengthList, list<Punto> lpuntos): nombre(nombre), lengthList(lengthList), lpuntos(lpuntos){};
        //constructor with list input
        Figura(const Figura &f): nombre(f.nombre), lengthList(f.lengthList), lpuntos(f.lpuntos){};
        //copy constructor
        ~Figura(){};
        
        void setPunto(Punto p){lpuntos.push_front(p);}
        //set of a single point in front of "Punto"'s list
        void setNombre(string nombre){ this->nombre=nombre; }
        void setLengthList(int lengthList){ this->lengthList=lengthList; }
        //normal input setters

        list<Punto> getPuntos(){ return lpuntos; } 
        string getNombre(){ return nombre; }
        int getLengthList(){ return lengthList; }
        //normal getters
        
        int calcularDistancia(Punto, Punto);
        virtual void imprimeFigura();

};

void Figura::imprimeFigura()
{
    cout << "- - - - - - - - - - - -" << endl;
    cout  <<"Nombre de la figura: "<< nombre << endl;
    cout <<"Cantidad de vectores: "<< lengthList << endl;
    
    list <Punto> listaOrdenada (lpuntos);
    //Creation of a new list where the list of points already created is assigned (makes a copy)
            
    listaOrdenada.sort([] (Punto punto1, Punto punto2){
    //With the help of the sort function <list> sort the objects
        if (punto1.getX() == punto2.getX())
        // Get X and check if they are equal
        {
            return punto1.getY() < punto2.getY();
            //If so, return if Y of "punto1" is less
        } else 
        {
        return punto1.getX() < punto2.getX();
        //Get the X attributes and check which one is smaller
        }
    });
    cout << "Puntos: " << endl;
    for ( auto obj : listaOrdenada) 
    // We print the objects of the already ordered list
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
    //pythagorean theorem used to calculate imaginary asitas between each vertex
}
