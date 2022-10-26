#include <stdio.h>

int main(){
    int i, cont = 0, N, cont1 = 0, cont2 = 0;
    for(i = 0;i < 5;i++){
        scanf("%d", &N);
        if(N % 2 == 0){
            cont++;
        }
        if(N < 0){
            cont1++;
        }
        if(N > 0){
            cont2++;
        }
    }
    printf("%d valor(es) par(es)\n", cont);
    printf("%d valor(es) impar(es)\n", 5 - cont);
    printf("%d valor(es) positivo(s)\n", cont2);
    printf("%d valor(es) negativo(s)\n", cont1);
    return 0;
}