#include <stdio.h>

int main() {
    float a, b, c, aux;
    scanf("%f%f%f", &a, &b, &c);

    if (a < b){
        aux = a; 
        a = b; 
        b = aux; 
    }
    if(b < c){ 
        aux = b; 
        b = c; 
        c = aux; 
    }
    if (a < b){
        aux = a; 
        a = b; 
        b = aux; 
    }

    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }else if(a * a == b * b + c * c){
        printf("TRIANGULO RETANGULO\n");
    }else if(a * a > b * b + c * c){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(a * a < b * b + c * c ){
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }else if((a == b || a == c || b == c)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}