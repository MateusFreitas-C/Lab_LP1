#include <iostream>
#include "Data.h"

using namespace std;

int main(){
    int d, m, a, qtde;

    cin >> d;
    cin >> m;
    cin >> a;
    cin >> qtde;

    Data d1(d, m, a);

    for(int i = 0; i < qtde; i++){
        d1.avancarDia();
    }

    cout << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno() << endl;

    return 0;
}
