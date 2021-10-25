#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
    int n,q;
    float p;
    string str;

    cin >> n;
    getline(cin.ignore(), str);
    cin >> q;
    cin >> p;

    Invoice inv1(n, str, q, p);

    cin >> n;
    getline(cin.ignore(), str);
    cin >> q;
    cin >> p;

    Invoice inv2(n, str, q, p);

    inv1.printInvoice();
    inv2.printInvoice();

    return 0;
}
