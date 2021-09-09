#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
    Invoice inv1, inv2;

    cin >> inv1.num;

    getline(cin.ignore(), inv1.descr);

    cin >> inv1.qtde;

    if(inv1.qtde < 0){
        inv1.qtde = 0;
    }

    cin >> inv1.preco;

    if(inv1.preco < 0){
        inv1.preco = 0;
    }

    inv1.getInvoiceAmount();

    cin >> inv2.num;

    getline(cin.ignore(), inv2.descr);

    cin >> inv2.qtde;

    if(inv2.qtde < 0){
        inv1.qtde = 0;
    }

    cin >> inv2.preco;

    if(inv2.preco < 0){
        inv2.preco = 0;
    }

    inv2.getInvoiceAmount();

    cout << inv1.num << " - " << inv1.descr << " - " << inv1.qtde << " - " << inv1.preco << " - " << inv1.fatura << endl;
    cout << inv2.num << " - " << inv2.descr << " - " << inv2.qtde << " - " << inv2.preco << " - " << inv2.fatura << endl;

    return 0;
}
