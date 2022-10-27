#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Amigos{
    char nome[25], op[5];
};

int main() {
    int i = 0, j, aux1 = 0, k, maior = 0, aux2=0, aux3;
    char nome[25];
    struct Amigos amigos[1000], aux[1000], aux0;
    

    while(scanf("%s", amigos[i].nome) && strcmp(amigos[i].nome, "FIM") != 0){
        scanf("%s", &amigos[i].op);
        if(strcmp(amigos[i].op, "YES")){
            aux2++;
        }
        i++;
    }

    for(j = 0; j < i;j++){
        if(strlen(amigos[j].nome) > maior && !strcmp(amigos[j].op, "YES")){
            strcpy(nome, amigos[j].nome);
            maior = strlen(amigos[j].nome);
        }
    }

    for(j = 0;j < i;j++){
        for(k = 0;k < aux1;k++){
            if(!strcmp(amigos[j].nome, aux[k].nome)){
                break;
            }
        }
        if(k == aux1){
            aux[aux1] = amigos[j];
            aux1++;
        }
    }
    
    aux2 = aux1 - aux2;

    for(j = 0; j <= i;j++){
        for(k = j+1;k < i;k++){
            aux3 = strcmp(aux[j].op, aux[k].op);
            if(aux3 < 0){
                aux0 = aux[j];
                aux[j] = aux[k];
                aux[k] = aux0;
            }
        }
    }

    for(j = 0; j <= aux2;j++){
        for(k = j+1;k < aux2;k++){
            aux3 = strcmp(aux[j].nome, aux[k].nome);
            if(aux3 > 0){
                aux0 = aux[j];
                aux[j] = aux[k];
                aux[k] = aux0;
            }
        }
    }

    for(j = aux2; j <= aux1;j++){
        for(k = j+1;k < aux1;k++){
            aux3 = strcmp(aux[j].nome, aux[k].nome);
            if(aux3 > 0){
                aux0 = aux[j];
                aux[j] = aux[k];
                aux[k] = aux0;
            }
        }
    }

    for(j = 0;j < aux1;j++){
        printf("%s\n", aux[j].nome);
    }
    printf("\nAmigo do Habay:\n%s\n", nome);

    return 0;
}