#include <stdio.h>

int main(){
    int i, cont = 0;
    float N, M = 0;
    for(i = 0;i < 6;i++){
        scanf("%f", &N);
        if(N > 0){
            cont++;
            M += N;
        }
    }
    M = M/cont;
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", M);
    return 0;
}