#include <iostream>
#include <Pessoa.h>
#include <string>

using namespace std;

int main(){
    int n, idade;
    string nome, tel, pesquisa;
    bool encontrou = false;

    cin >> n;
    cin.ignore();

    Pessoa pessoas[n];

    for(int i = 0; i < n; i++){
        getline(cin, nome);
        cin >> idade;
        getchar();
        getline(cin, tel);

        pessoas[i] = Pessoa(nome, idade, tel);
    }

    getline(cin, pesquisa);

    for(int i = 0; i < n; i++){

        if(pessoas[i].getNome().find(pesquisa) != string::npos ){
            cout << pessoas[i].getNome() << ", " << pessoas[i].getIdade() << ", " << pessoas[i].getFone() << endl;
            encontrou = true;
        }
    }

    if(!encontrou){
        cout << "Pessoa não encontrada" << endl;
    }

    return 0;
}
