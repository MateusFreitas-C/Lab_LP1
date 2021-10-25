#include <iostream>
#include "Apartamento.h"
#include "Casa.h"
#include "Terreno.h"

using namespace std;

int main()
{
    int n, tipo;
    Imovel *im;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tipo;

        switch(tipo){
        case 1:
            im = new Casa();
            break;
        case 2:
            im = new Apartamento();
            break;
        case 3:
            im = new Terreno();
            break;
        }
        im->lerAtributos();
        im->exibeAtributos();

        delete im;
    }

    return 0;
}
