#include "Terreno.h"
#include <iostream>

using namespace std;

Terreno::Terreno() : Imovel()
{
    nome = "Terreno";
    tipo = 3;
}

void Terreno::lerAtributos(){
    Imovel::lerAtributos();
    cin >> area;
}
void Terreno::exibeAtributos(){
    Imovel::exibeAtributos();
    cout << area << "m2 de área de terreno. R$ " << valor << "." << endl;
}
