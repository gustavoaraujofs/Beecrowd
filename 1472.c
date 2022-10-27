#include <stdio.h>

int main() {
    int i, j, k, N, qtd = 0, cont = 0, aux;
    while (scanf("%d", &N) != EOF){
        int vet[N];
        for(i = 0;i < N;i++){
            scanf("%d", &aux);
            cont+=aux;
            vet[i] = cont;
        }

        if (cont % 3 != 0){
            printf("0\n");
        }
		else{
            aux = cont / 3;
            for (i = 0;vet[i]+2*aux <= cont;i++){
				while (vet[j] < vet[i]+aux){
                    j++;
                }
                while (vet[k] < vet[i]+2*aux){
                    k++;
                }
                if(vet[j] == vet[i]+aux && vet[k] == vet[i]+2*aux){
                    qtd++;
                }
                
			}
            printf("%d\n", qtd);
		}
        qtd = 0;
        cont = 0;
        j = 0;
        k = 0;
    }
    
    return 0;
}