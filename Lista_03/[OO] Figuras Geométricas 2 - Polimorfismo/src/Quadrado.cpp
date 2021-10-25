#include "Quadrado.h"
#include <iostream>

Quadrado::Quadrado()
    : FiguraGeometrica(1)
{
    nome = "Quadrado";
}

float Quadrado::calcularArea(){
    return lado * lado;
}

void Quadrado::lerAtributosArea(){
    std::cin >> lado;
}
