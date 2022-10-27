#include <stdio.h>

int main(){
    int N, K, i, j, a, b, par=-1;

    scanf("%d", &N);
    int vetor[N];

    for(i = 0;i < N;i++){
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &K);

    j = N - 1;
    i = 0;

    while(par != K){
        if(vetor[i] + vetor[j] == K){
            a = vetor[i];
            b = vetor[j];
            par = K;
        }else if(vetor[i] + vetor[j] < K){
            i++;
        }else{
            j--;
        }
    }
    printf("%d %d\n", a, b);
    return 0;
}