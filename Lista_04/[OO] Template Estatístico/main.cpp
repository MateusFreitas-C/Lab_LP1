#include <iostream>
#include <vector>
#include <string>
#include "Livro.h"
#include "Pedido.h"
#include "Estatistica.h"

using namespace std;

int main()
{
    int n, quant;
    float preco;
    string titulo;
    Estatistica<Livro> eLiv;
    Estatistica<Pedido> ePed;
    vector<Livro> livros;
    vector<Pedido> pedidos;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> preco;
        cin >> quant;
        pedidos.push_back(Pedido(preco, quant));
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, titulo);
        cin >> quant;
        livros.push_back(Livro(titulo, quant));
    }
    int index = ePed.indexOfMaior(pedidos);
    cout << "Maior: " << pedidos[index].toString() << endl;
    index = ePed.indexOfMenor(pedidos);
    cout << "Menor: " << pedidos[index].toString() << endl;
    cout << "Media: " << ePed.media(pedidos) << endl;

    index = eLiv.indexOfMaior(livros);
    cout << "Maior: " << livros[index].toString() << endl;
    index = eLiv.indexOfMenor(livros);
    cout << "Menor: " << livros[index].toString() << endl;
    cout << "Media: " << eLiv.media(livros) << endl;

    return 0;
}
