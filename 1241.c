#include <stdio.h>
#include <string.h>

int encaixa(const char *s1, const char *s2);

int main(){
    char A[1000],B[1000];
    int N,valor,i;
    
    scanf("%d",&N);

    for(i = 0;i < N;i++){
        scanf("%s %s",A,B);

        valor = encaixa(A,B);

        if(valor == 1){
            printf("encaixa\n");
        }else{
            printf("nao encaixa\n");
        }
    }
    return 0;
}
int encaixa(const char *s1, const char *s2){
    int aux1,aux2,aux,j = 0,cont = 0,i;

    aux1 = strlen(s1);
    aux2 = strlen(s2);

    aux = aux1 - aux2;

    if(aux1 < aux2){
        return 0;
    }else{
        for(i = aux;i < aux1;i++){
            if(s1[i] == s2[j]){
                cont++;
            }
            j++;
        }
    }
    if(cont == aux2){
        return 1;
    }
    return 0;
}