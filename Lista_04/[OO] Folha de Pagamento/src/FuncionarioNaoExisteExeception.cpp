#include "FuncionarioNaoExisteExeception.h"

#include <iostream>

FuncionarioNaoExisteExeception::FuncionarioNaoExisteExeception(std::string n)
{
    std::cout << "FuncionarioNaoExisteException " << n << std::endl;
}
