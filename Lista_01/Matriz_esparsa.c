#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Eh_Esparsa(int vetor[][10], int linha, int coluna){
    int i, j;
    int zero;

    for(i = 0; i < linha; i++){
        
        for(j = 0; j < coluna; j++){         
            
            if(vetor[i][j] == 0){
                zero++;
            }          
        }
    }
    return zero;
}

int main(){
    int linha, coluna, i, j;
    int matriz[10][10], contador;
    float resultado;

    scanf("%d %d", &linha, &coluna);

    for(i = 0; i < linha; i++){
        
        for(j = 0; j < coluna; j++){         
            
            scanf("%d", &matriz[i][j]);            
        }
    }

    contador = Eh_Esparsa(matriz, linha, coluna);
    
    resultado = (contador * 1.0) / (linha * coluna);

    if(resultado >= 0.7){
        puts("A matriz é esparsa");
    }else{
        puts("A matriz não é esparsa");
    }

    return 0;
}