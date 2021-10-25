#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo(int tipo)
    : FiguraGeometrica(tipo)
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
