#include <stdio.h>

void media(){
    float N1, N2, M;
    do{
        scanf("%f", &N1);
        if(N1 > 10 || N1 < 0){
            printf("nota invalida\n");
        }
    }while (N1 > 10 || N1 < 0);

    do{
        scanf("%f", &N2);
        if(N2 > 10 || N2 < 0){
            printf("nota invalida\n");
        }
    }while (N2 > 10 || N2 < 0);

    M = (N1 + N2) / 2;
    printf("media = %.2f\n", M);
}

int main(){
    int i = 1;
    while (i != 2)
    {
        if(i == 1){
            media();
        }
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &i);
    }
    return 0;
}