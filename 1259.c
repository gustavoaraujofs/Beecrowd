#include <stdio.h>

int main() {
    int N, i, j, k = 0, aux, cont = 0, n;
    
    scanf("%d", &N);
    int vet[N], impar[N], par[N];
    
    for(i = 0;i < N;i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            par[cont] = n;
            cont++;
        }else{
            impar[k] = n;
            k++;
        }
    }
    k = 0;
    for(i = 1;i < N;i++){
        if(i < cont){
            aux = par[i];
            j = i - 1;
            while(aux < par[j] && j >= 0){
                par[j+1] = par[j];
                j--;
            }
            par[j+1] = aux;
        }else{
            aux = impar[k];
            j = k - 1;
            while(aux < impar[j] && j >= 0){
                impar[j+1] = impar[j];
                j--;
            }
            impar[j+1] = aux;
            k++;
        }
    }

    j = k-1;
    for(i = 0;i < N;i++){
        if(i < cont){
            printf("%d\n", par[i]);
        }else{
            printf("%d\n", impar[j]);
            j--;
        }
    }

    return 0;
}