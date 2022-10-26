#include <stdio.h>

int main() {
    int i, x, y, cont = 0;
    scanf("%d%d", &x, &y);
    if(x < y){
        for(i = x+1;i < y;i++){
            if(i % 2 != 0){
                cont += i;
            }
        }
    }else{
        for(i = x-1;i > y;i--){
            if(i % 2 != 0){
                cont += i;
            }
        }
    }
    printf("%d\n", cont);

    return 0;
}