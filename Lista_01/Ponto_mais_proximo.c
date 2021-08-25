#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto{
    int x;
    int y;
    }tPonto;

float Calcula_Dist(tPonto p1, tPonto p2){
    
    return sqrt(( (p2.x - p1.x) * (p2.x - p1.x) ) + ( (p2.y - p1.y) * (p2.y - p1.y) ));
}

int main(){
    tPonto p1;
    int n, dist, indice, maior_dist=999999, i;

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);

    scanf("%d", &n);
    
    tPonto ar[n];

    for(i = 0; i < n; i++){
        scanf("%d", &ar[i].x);
        scanf("%d", &ar[i].y);

        dist = Calcula_Dist(p1, ar[i]);

        if(dist < maior_dist){
            maior_dist = dist;
            indice = i;
        }
    }

    printf("Ponto mais perto é (%d, %d)\n", ar[indice].x, ar[indice].y);

    return 0;
}