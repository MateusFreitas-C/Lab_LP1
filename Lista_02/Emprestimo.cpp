#include <iostream>

using namespace std;

int main(){
    int salario = 0, emprestimo = 0, n_prest = 0, prest;
    double porcentagem;

    while(salario <= 0){
        cin >> salario;
    }

    while(emprestimo <= 0){
        cin >> emprestimo;
    }

     while(n_prest <= 0){
        cin >> n_prest;   
    }

    prest = emprestimo / n_prest;
    porcentagem = emprestimo * 0.3;

    if(porcentagem < prest){
        cout << "Emprestimo nao pode ser concedido" << endl;
    
    }else{
        cout << "Emprestimo pode ser concedido" << endl;
    }

    return 0;
}