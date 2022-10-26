#include <stdio.h>

int main(){
    float valor;

    scanf("%f", &valor);

    if(valor <= 2000.00){
        printf("Isento\n");
    }else if(valor <= 3000.00){
        valor -= 2000;
        printf("R$ %.2f\n", valor * 0.08);
    }else if(valor <= 4500.00){
        valor -= 3000;
        printf("R$ %.2f\n", valor * 0.18 + 80);
    }else{
        valor -= 4500;
        printf("R$ %.2f\n", valor * 0.28 + 350);
    }
    return 0;
}