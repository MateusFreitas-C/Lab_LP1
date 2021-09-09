#include <iostream>
#include <string>
#include "Funcionario.h"

using namespace std;

int main(){
    int n;

    cin >> n;

    Funcionario func[n];

    for(int i = 0; i < n; i++){
        cin >> func[i].nome;
        cin >> func[i].sobrenome;
        cin >> func[i].salario_mensal;
    }

    for(int i = 0; i < n; i++){
        cout << func[i].nome << " " << func[i].sobrenome <<  " - " << func[i].salario_mensal << " - " << func[i].getSalarioAnual() << endl;
    }

    return 0;
}
