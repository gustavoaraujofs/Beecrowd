#include <stdio.h>

int main(){
    int X, Y, i, j = 0;

    scanf("%d%d", &X, &Y);

    for(i = 1; i <= Y;i++){
        if(j == X){
            printf("\n");
            j = 0;
        }
        if(j + 1 == X){
            printf("%d", i);
        }else{
            printf("%d ", i);
        }
        j++;
    }
    printf("\n");
    return 0;
}