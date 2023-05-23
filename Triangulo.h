#include <iostream>
#include <string>
#include "Figura.h"

using namespace std;

class Triangulo: public Figura
{
    public:
    
    Triangulo() = default;
    Triangulo(string nombre, int lengthPunto): Figura("Triangulo", 3)
    {
        
    };
    Triangulo(const Triangulo &t): Figura(t){};
    ~Triangulo(){};

    int calcularArea(){};
    int calcularPerimetro();
    void imprimeFigura() override;
};