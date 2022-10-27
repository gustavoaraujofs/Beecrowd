#include <stdio.h>

int main(){
    int n, m, i, j, cont;

    while(scanf("%d%d", &n, &m) != EOF){
        int vet[n+2][m+2];
        for (i = 0; i < n+2; i++){
            for (j = 0; j < m+2; j++){
                vet[i][j] = -1;
            }
        }

        for(i = 1;i < n+1;i++){
            for(j = 1;j < m+1;j++){
                scanf("%d", &vet[i][j]);
            }
        }

        for(i = 1;i < n+1;i++){
            for(j = 1;j < m+1; j++){
                if(vet[i][j] == 1){
                    printf("9");
                }else{
                    cont = 0;
                    if(i == 0 || j == 0){
                        if(vet[i+1][j] == 1){
                            cont++;
                        }
                        if(vet[i][j+1] == 1){
                            cont++;
                        }
                    }else{
                        if(vet[i+1][j] == 1){
                            cont++;
                        }
                        if(vet[i-1][j] == 1){
                            cont++;
                        }
                        if(vet[i][j+1] == 1){
                            cont++;
                        }
                        if(vet[i][j-1] == 1){
                            cont++;
                        }
                    }
                    printf("%d", cont);
                }
            }
            printf("\n");
        }
    }

    return 0;
}