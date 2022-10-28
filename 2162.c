#include <stdio.h>

int main(){
    int i = 0, qtd, pi = 0;
    scanf("%d", &qtd);

    int array[qtd];

    while (i != qtd){
        scanf("%d", &array[i]);
        i++;
    }

    if (qtd != 1){
        if(array[0] > array[1]){
            for(i = 1; i < qtd-1;i++){
                if(i % 2 != 0){
                    if(!(array[i] < array[i+1])){
                        pi = 1;
                    }
                }else{
                    if(!(array[i] > array[i+1])){
                        pi = 1;
                    }
                }
            }
        }else if(array[0] < array[1]){
            for(i = 1; i < qtd-1;i++){
                if(i % 2 != 0){
                    if(!(array[i] > array[i+1])){
                        pi = 1;
                    }
                }else{
                    if(!(array[i] < array[i+1])){
                        pi = 1;
                    }
                }
            }
        }else{
            pi = 1;
        }
        
        if(pi == 0){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }else{
        printf("0\n");
    }

    return 0;
}