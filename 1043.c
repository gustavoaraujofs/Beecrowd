#include <stdio.h>

int main() {
    float hip, cat1, cat2;
    scanf("%f", &cat1);
    scanf("%f", &cat2);
    scanf("%f", &hip);
    if ((cat1 < (cat2 + hip)) && (cat2 < (cat1 + hip))){
        printf("Perimetro = %.1f\n", cat1+cat2+hip);
    }else{
        printf("Area = %.1f\n", ((cat1+cat2)*hip)/2);
    }
    return 0;
}