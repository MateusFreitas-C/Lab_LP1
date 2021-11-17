#ifndef LIVRO_H
#define LIVRO_H

#include <string>

class Livro
{
    public:
        Livro(std::string t, int paginas);
        int getTotal();
        std::string toString();

    private:
        std::string titulo;
        int totalPaginas;
};

#endif // LIVRO_H
