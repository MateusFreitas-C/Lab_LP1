#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(int d, int m, int a)
{
    setMes(m);
    setDia(d);
    ano = a;
}

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;
}

string Data::getDia(){
    if(dia < 10){
        return "0" + to_string(dia);

    }else{
        return to_string(dia);
    }
}

string Data::getMes(){
    if(mes < 10){
        return "0" + to_string(mes);

    }else{
        return to_string(mes);
    }
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int d){
    if(1 <= d && d <= getDaysMonth(mes)){
        dia = d;

    }else{
        cout << "Atributo dia Inválido" << endl;
        dia = 1;
    }
}

void Data::setMes(int m){

    if(1 <= m && m <= 12){
        mes = m;

    }else{
        cout << "Atributo mês Inválido" << endl;
        mes = 1;
    }
}

void Data::setAno(int a){
    ano = a;
}

int Data::getDaysMonth(int mes){

    if(mes == 2){
        return 28;
    }

    else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        return 31;

    }else{
        return 30;
    }

}

void Data::avancarDia(){
    dia++;

    if (dia >getDaysMonth(mes)){
        mes++;
        dia = 1;

        if(mes > 12){
            ano++;
            mes = 1;
        }
    }
}
