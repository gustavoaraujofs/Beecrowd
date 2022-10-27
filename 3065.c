#include <stdio.h>

int main() {
    int N = -1, i, j=0, result, cont = 1;
    char *aux;

    while (1){
        scanf("%d", &N);
        if(N == 0){
            break;
        }
        int vet[N];
        char op[N], express[N*N];
        scanf("%s", express);

        for(i = 0;i < strlen(express);i++){
            if(express[i] == '+' || express[i] == '-'){
                op[j] = express[i];
                j++;
            }
        }

        aux = strtok(express, "+-");
        vet[0] = atoi(aux);
        
        i = 1;
        while (aux){
            aux = strtok(NULL, "+-");
            if(aux){
                vet[i] = atoi(aux);
                i++;
            }
        }
        j = 0;
        result = vet[0];
        for(i = 1;i < N;i++){
            if(op[j]=='+'){
                result += vet[i];
                j++;
            }else{
                result -= vet[i];
                j++;
            }
        }
        printf("Teste %d\n", cont);
        printf("%d\n", result);
        printf("\n");
        cont++;
        result = 0;
        j = 0;
    }
    
    return 0;
}