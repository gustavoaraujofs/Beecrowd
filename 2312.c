#include <stdio.h>

struct Pais{
    char nome[100];
    int O, P, B;
};

int main(){
    int N, i, j, aux1;
    scanf("%d", &N);
    struct Pais pais[N], aux;

    for(i = 0;i < N;i++){
        scanf("%s%d%d%d", &pais[i].nome, &pais[i].O, &pais[i].P, &pais[i].B);
    }

    for(i = 0; i <= N;i++){
        for(j = i+1;j < N;j++){
            if(pais[i].O < pais[j].O){
                aux = pais[i];
                pais[i] = pais[j];
                pais[j] = aux;
            }else if(pais[i].O == pais[j].O){
                if(pais[i].P < pais[j].P){
                    aux = pais[i];
                    pais[i] = pais[j];
                    pais[j] = aux;
                }else if(pais[i].P == pais[j].P){
                    if(pais[i].B < pais[j].B){
                        aux = pais[i];
                        pais[i] = pais[j];
                        pais[j] = aux;
                    }else if(pais[i].B == pais[j].B){
                        aux1 = strcmp(pais[i].nome, pais[j].nome);
                        if(aux1 > 0){
                            aux = pais[i];
                            pais[i] = pais[j];
                            pais[j] = aux;
                        }
                    }
                }
            }
        }
    }

    for(i = 0;i < N;i++){
        printf("%s %d %d %d\n", pais[i].nome, pais[i].O, pais[i].P, pais[i].B);
    }    
    
    return 0;
}