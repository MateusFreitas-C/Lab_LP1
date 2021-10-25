#include "Retangulo.h"
#include <iostream>

Retangulo::Retangulo()
    : FiguraGeometrica(2)
{
    nome = "Retângulo";
}

float Retangulo::calcularArea(){
    return l2 * l1;
}

void Retangulo::lerAtributosArea(){
    std::cin >> l1;
    std::cin >> l2;
}
