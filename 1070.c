#include <stdio.h>

int main() {
    int i, N;
    
    scanf("%d", &N);
    for(i = 0;i < 6;i++){
        if(N % 2 == 0){
            N += 1;
        }
        printf("%d\n", N);
        N += 2;
    }

    return 0;
}