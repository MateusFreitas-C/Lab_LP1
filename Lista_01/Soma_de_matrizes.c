#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int linha, coluna, i, j;

    scanf("%d %d", &linha, &coluna);

    int matriz_1[linha][coluna], matriz_2[linha][coluna];
    int soma[linha][coluna];

    for(i = 0; i < linha; i++){
        
        for(j = 0; j < coluna; j++){         
            
            scanf("%d", &matriz_1[i][j]);            
        }
    }

    for(i = 0; i < linha; i++){
        
        for(j = 0; j < coluna; j++){         
            
            scanf("%d", &matriz_2[i][j]);            
        }
    }    

    for(i = 0; i < linha; i++){
        
        for(j = 0; j < coluna; j++){         
            
            soma[i][j] = matriz_1[i][j] + matriz_2[i][j];
            
            if(j == coluna - 1){
                printf("%d\n", soma[i][j]); 

            }else{
                printf("%d ", soma[i][j]);
            }            
        }
    }  
    
    return 0;
}