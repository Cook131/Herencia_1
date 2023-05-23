#include <iostream>
#include <string>
#include "Figura.h"

class Triangulo: public Figura
{
    public:
    
    Triangulo()=default;
    Triangulo(string nombre, int lengthPunto): Figura("Triangulo", 3)
    {
        
    };
    Triangulo(const Triangulo &t): Figura(t){};
    ~Triangulo(){};

    int calcularArea(){};
    int calcularPerimetro();
};