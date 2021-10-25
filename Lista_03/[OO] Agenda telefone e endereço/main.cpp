#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"
#include <string>

using namespace std;

int main()
{
    int n, numero;
    Endereco adress;
    Pessoa pessoa;
    string nome, telefone, rua, cep, bairro, estado, cidade;

    cin >> n;

    for(int i = 0; i < n; i++){
        getline(cin.ignore(), nome);
        getline(cin, telefone);
        getline(cin, rua);
        cin >> numero;
        getline(cin.ignore(), bairro);
        getline(cin, cidade);
        getline(cin, estado);
        cin >> cep;

        adress = Endereco(rua, numero, bairro, cidade, estado, cep);
        pessoa = Pessoa(nome, adress, telefone);

        cout << pessoa.toString() << endl;
        cout << endl;
    }
    return 0;
}
