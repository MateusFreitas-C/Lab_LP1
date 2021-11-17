#include "OrcamentoEstouradoException.h"

#include <iostream>

OrcamentoEstouradoException::OrcamentoEstouradoException(double total)
{
    std::cout << "OrcamentoEstouradoException " << total << std::endl;
}
