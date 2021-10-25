#include "Invoice.h"
#include <iostream>

using namespace std;

Invoice::Invoice()
{
   fatura = 0;
}

Invoice::Invoice(int n, string str, int q, float p){
   setNum(n);
   setDescr(str);
   setQtde(q);
   setPreco(p);
   fatura = 0;

   if(q < 0){
        qtde = 0;
   }

   if(p < 0){
        preco = 0.0;
   }

}

float Invoice:: getInvoiceAmount(){
    return fatura += preco* qtde;
}

int Invoice::getNum(){
    return num;
}

int Invoice::getQtde(){
    return qtde;
}

float Invoice::getPreco(){
    return preco;
}

string Invoice::getDescr(){
    return descr;
}

void Invoice::setDescr(string str){
    descr = str;
}

void Invoice::setNum(int n){
    num = n;
}

void Invoice::setPreco(float p){
    preco = p;
}

void Invoice::setQtde(int q){
    qtde = q;
}

void Invoice::printInvoice(){
    cout << num << " - " << descr << " - " << qtde << " - " << preco << " - " << getInvoiceAmount() << endl;
}
