#ifndef ESTATISTICA_H
#define ESTATISTICA_H

#include <vector>

template <class T>
class Estatistica
{
    public:
        //Estatistica();
        int indexOfMaior(std::vector<T> vec)
        {
            int maior = 0;
            int index = -1;

            if(vec.size() > 0){
                maior = vec[0].getTotal();
                index = 0;
            }

            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() > maior){
                    maior = vec[i].getTotal();
                    index = i;
                }
            }
            return index;
        }

        int indexOfMenor(std::vector<T> vec)
        {
            int menor;
            int index = -1;

            if(vec.size() > 0){
                menor = vec[0].getTotal();
                index = 0;
            }

            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() < menor){
                    menor = vec[i].getTotal();
                    index = i;
                }
            }
            return index;

        }

        float media(std::vector<T> vec)
        {
            float soma = 0;

            for(int i = 0; i < vec.size(); i++){
                soma += vec[i].getTotal();
            }

            return soma / vec.size();
        }
};

#endif // ESTATISTICAS_H
