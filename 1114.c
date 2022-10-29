#include <stdio.h>

int main() {
    int s = 0;
    while (s != 2002){
        scanf("%d", &s);
        if(s != 2002){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
        }
    }
    
    return 0;
}