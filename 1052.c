#include <stdio.h>

int main(){
    int N;
    char vet[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December"};
    scanf("%d", &N);
    printf("%s\n", vet[N-1]);
    return 0;
}