#include <stdio.h>
#include <string.h>

int main() {
    int N, n, i, j, k, cont;
    char vet[102][52];
    scanf("%d", &N);
    
    for(i = 0;i < N;i++){
        cont = 0;
        scanf("%d", &n);

        for(j = 0;j < n;j++){
            scanf("%s", vet[j]);
            for(k = 0;k < strlen(vet[j]);k++){
                cont += (vet[j][k] - 65) + j + k;
            }
        }
        printf("%d\n", cont);
    }
    
    return 0;
}