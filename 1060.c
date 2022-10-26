#include <stdio.h>

int main() {
    int i, cont = 0, N;
    for(i = 0;i < 6;i++){
        scanf("%f", &N);
        if(N > 0){
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);

    return 0;
}