#include <stdio.h>

int main() {
    int N[15], i, par[5], impar[5], j = 0, k = 0;

    for(i = 0;i < 15;i++){
        scanf("%d", &N[i]);
    }


    for(i = 0;i < 15;i++){
        if(N[i] % 2 == 0){
            par[j] = N[i];
            j++;
        }else{
            impar[k] = N[i];
            k++;
        }

        if(j == 5){
            for(j = 0;j < 5;j++){
                printf("par[%d] = %d\n", j, par[j]);
            }
            j = 0;
        }

        if(k == 5){
            for(k = 0;k < 5;k++){
                printf("impar[%d] = %d\n", k, impar[k]);
            }
            k = 0;
        }

    }

    for(i = 0;i < k;i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    
    for(i = 0;i < j;i++){
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}