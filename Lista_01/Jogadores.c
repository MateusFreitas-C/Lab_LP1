#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[40];
    int idade;
    int chutes;
    int gols;
}tJogador;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    tJogador j1, j2;
    double p1, p2;
    
    fgets(j1.nome, 40, stdin);
    RemoveBarraN(j1.nome);
    scanf("%d", &j1.idade);
    scanf("%d", &j1.chutes);
    scanf("%d%*c", &j1.gols);
    
    fgets(j2.nome, 40, stdin);
    RemoveBarraN(j2.nome);
    scanf("%d", &j2.idade);
    scanf("%d", &j2.chutes);
    scanf("%d", &j2.gols);
    
    p1 = j1.gols * 1.0 / j1.chutes;
    p2 = j2.gols * 1.0 / j2.chutes;
    
    if(p1 > p2){
        printf("%s (%d)", j1.nome, j1.idade);
    
    }else{
        printf("%s (%d)", j2.nome, j2.idade);
    }
    
    return 0;
}
