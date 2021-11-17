#include "Livro.h"

Livro::Livro(std::string t, int paginas)
{
    titulo = t;
    totalPaginas = paginas;
}

int Livro::getTotal(){
    return totalPaginas;
}

std::string Livro::toString(){
    return titulo + ", páginas: " + std::to_string(totalPaginas);
}
