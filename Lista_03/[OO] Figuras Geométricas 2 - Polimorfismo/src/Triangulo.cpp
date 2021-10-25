#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo()
    : FiguraGeometrica(3)
{

    nome = "Triângulo";
}

Triangulo::~Triangulo()
{
    //dtor
}

float Triangulo::calcularArea(){
    return (base * altura) / 2;
}

void Triangulo::lerAtributosArea(){
    std::cin >> base;
    std::cin >> altura;

}
