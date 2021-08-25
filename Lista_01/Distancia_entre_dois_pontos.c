#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Calcula_Dist(int x1, int y1, int x2, int y2){
    
    return ( (x2 - x1) * (x2 - x1) ) + ( (y2 - y1) * (y2 - y1) );
}

int main(){
    int x1, x2, y1, y2;
    float dist;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    dist = Calcula_Dist(x1, y1, x2, y2);

    printf("%.f", dist);

    return 0;
}