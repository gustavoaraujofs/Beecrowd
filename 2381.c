#include <stdio.h>
#include <string.h>

int main() {
    int N, K, i, j, aux;
    scanf("%d %d", &N, &K);
    char nome[N+3][23], aux1[23];

    for(i = 0;i < N;i++){
        scanf("%s", &nome[i]);
    }

    for(i = 0; i <= N;i++){
        for(j = i+1;j < N;j++){
            aux = strcmp(nome[i], nome[j]);
            if(aux > 0){
                strcpy(aux1, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux1);
            }
        }
    }

    printf("%s\n", nome[K-1]);

    return 0;
}