#include <stdio.h>

int main(){
    int A;
    float B;
    char C, D[51];
    scanf("%d %f %c %50[^\n]", &A, &B, &C, D);
    
    printf("%d%.6f%c%s\n", A, B, C, D);
    printf("%d\t%.6f\t%c\t%s\n", A, B, C, D);
    printf("%10d%10.6f%10c%10s\n", A, B, C, D);
    return 0;
}