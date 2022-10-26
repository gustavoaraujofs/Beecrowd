#include <stdio.h>

int main() {
    int N, X, i, cont = 0;
    scanf("%d", &N);
    for(i = 0;i < N;i++){
        scanf("%d", &X);
        if(X >= 10 && X <= 20){
            cont++;
        }
    }
    printf("%d in\n", cont);
    printf("%d out\n", N - cont);
    return 0;
}