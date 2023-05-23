#include <iostream>
#include <string>
#include "Figura.h"

using namespace std;


class Circulo: public Figura
{
    public:
    
    Circulo() = default;
    Circulo(string nombre, int lengthPunto): Figura("Circulo", 2)
    {
        
    };
    Circulo(const Circulo &t): Figura(t){};
    ~Circulo(){};

    int calcularArea(){};
    int calcularPerimetro();
    void imprimeFigura() override;
};