#include <stdio.h>
#include <string.h>

int main(){
    int i, j;
    char vet[3][15];
    scanf("%s%s%s", vet[0], vet[1], vet[2]);
    if(strcmp(vet[0], "vertebrado") == 0){
        if(strcmp(vet[1], "ave") == 0){
            if(strcmp(vet[2], "carnivoro") == 0){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            if(strcmp(vet[2], "onivoro") == 0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else{
        if(strcmp(vet[1], "inseto") == 0){
            if(strcmp(vet[2], "herbivoro") == 0){
                printf("lagarta\n");
            }else{
                printf("pulga\n");
            }
        }else{
            if(strcmp(vet[2], "onivoro") == 0){
                printf("minhoca\n");
            }else{
                printf("sanguessuga\n");
            }
        }
    }
    return 0;
}