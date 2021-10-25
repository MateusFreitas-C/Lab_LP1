#include <iostream>
#include "Data.h"

using namespace std;

int main(){
    Data d1;
    int n;

    cin >> n;
    d1.setDia(n);

    cin >> n;
    d1.setMes(n);

    cin >> n;
    d1.setAno(n);

    d1.printData();

    return 0;
}
