#include "Casa.h"
#include <iostream>

using namespace std;

Casa::Casa() : Imovel()
{
    nome = "Casa";
    tipo = 1;
}

void Casa::lerAtributos(){
    Imovel::lerAtributos();
    cin >> nPav;
    cin >> nQuartos;
    cin >> areaTerreno;
    cin >> areaConstruida;
}
void Casa::exibeAtributos(){
    Imovel::exibeAtributos();
    cout << nPav << " pavimentos, " << nQuartos << " quartos, " << areaTerreno << "m2 de área de terreno e " << areaConstruida << "m2 de área construída. R$" << valor << "." << endl;
}
