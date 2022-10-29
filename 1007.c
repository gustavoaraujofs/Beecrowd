#include <stdio.h>

int main() {
    int A, B, C, D, DI;
    
    scanf("%d%d%d%d", &A, &B, &C, &D);
    DI = (A * B - C * D);
    
    printf("DIFERENCA = %d\n", DI);
    return 0;
}