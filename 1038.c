#include <stdio.h>

int main() {
    int A, B;
    scanf("%d%d", &A, &B);

    switch(A){
        case 1:
            printf("Total: R$ %.2f\n", B * 4.0);
            break;
        case 2:
            printf("Total: R$ %.2f\n", B * 4.5);
            break;
        case 3:
            printf("Total: R$ %.2f\n", B * 5.0);
            break;
        case 4:
            printf("Total: R$ %.2f\n", B * 2.0);
            break;
        case 5:
            printf("Total: R$ %.2f\n", B * 1.5);
            break;
        default:
            break;
    }

    return 0;
}