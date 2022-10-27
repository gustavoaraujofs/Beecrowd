#include <stdio.h>

int main() {
    int N[20], i;

    for(i = 0;i < 20;i++){
        scanf("%d", &N[i]);
    }

    for(i = 20;i > 0;i--){
        printf("N[%d] = %d\n", 20 - i, N[i-1]);
    }
    return 0;
}