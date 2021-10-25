#include "Data.h"
#include <iostream>

using namespace std;

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int d){
    dia = d;
}

void Data::setMes(int m){
    mes = m;
}

void Data::setAno(int a){
    ano = a;
}

void Data::printData(){
    cout << getDia() << " de ";

        switch (getMes()){
        case 1:
            std::cout << "Janeiro";
            break;
        case 2:
            std::cout << "Fevereiro";
            break;
        case 3:
            std::cout << "Março";
            break;
        case 4:
            std::cout << "Abril";
            break;
        case 5:
            std::cout << "Maio";
            break;
        case 6:
            std::cout << "Junho";
            break;
        case 7:
            std::cout << "Julho";
            break;
        case 8:
            std::cout << "Agosto";
            break;
        case 9:
            std::cout << "Setembro";
            break;
        case 10:
            std::cout << "Outubro";
            break;
        case 11:
            std::cout << "Novembro";
            break;
        case 12:
            std::cout << "Dezembro";
            break;
        default:
            std::cout << "Indefinido";
            break;

    }
    cout << " de " << getAno() << endl;
}
