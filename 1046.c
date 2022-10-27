#include <stdio.h>

int main(){
    int hr_ini, hr_fnl, duration = 0, i;

    scanf("%d%d", &hr_ini, &hr_fnl);

    i = hr_ini;

    do{
        if(i == 24){
            i = 0;
        }else{
            i++;
            duration++;
        }
    }while (i != hr_fnl);

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}