#include <stdio.h>

int main() {
    char O;
    int i, j, aux1 = 5, aux2 = 6;
    double matriz[12][12], soma = 0;
    scanf("%c", &O);

    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = 7;i < 12;i++){
        for(j = aux1;j <= aux2;j++){
            soma += matriz[i][j];
        }
        aux1--;
        aux2++;
    }

    if(O == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma/30);
    }
    return 0;
}