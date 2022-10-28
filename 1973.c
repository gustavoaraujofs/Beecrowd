#include <stdio.h>

int main(){
    long long int N, i, t_ovelhas = 0, cont_ovelhas = 0, controller = 0, test = 0;

    scanf("%lld", &N);
    long long int vetor[N];

    for(i = 0;i < N;i++){
        scanf("%lld", &vetor[i]);
        t_ovelhas += vetor[i];
    }

    i = 0;
    while (i < N && i >= 0){
        if(vetor[i] % 2 != 0){
            vetor[i]--;
            cont_ovelhas++;
            controller++;
            i++;
        }else if(vetor[i] == 0){
            i--;
        }else{
            if(test == 0){
                controller++;
                test++;
            }
            vetor[i]--;
            cont_ovelhas++;
            i--;
        }
    }

    printf("%lld %lld\n", controller, t_ovelhas-cont_ovelhas);
    return 0;
}