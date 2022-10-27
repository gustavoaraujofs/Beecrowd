#include <stdio.h>

int main() {
    int i, N, y, x, num, vet[10000], j, k, aux;
    while (scanf("%d", &N) != EOF){
        for(i = 0;i < N;i++){
            scanf("%d%d", &x, &y);
            for(j = x;j <= y;j++){
                vet[k] = j;
                k++;
            }
        }

        scanf("%d", &num);

        quick_sort(vet, 0, k - 1);

        for(j = 0;j < k;j++){
            if(vet[j] == num){
                x = j;
                y = x;
                break;
            }else{
                x = -1;
            }
        }

        if(x == -1){
            printf("%d not found\n", num);
        }else{
            j = x;
            while (vet[j] == num){
                y = j;
                j++;
            }
            printf("%d found from %d to %d\n", num, x, y);
        }
        
        k = 0;

    }
    return 0;
}

void quick_sort(int *vet, int left, int right) {
    int i, j, x, y;
    
    i = left;
    j = right;
    x = vet[(left + right) / 2];
    
    while(i <= j) {
        while(vet[i] < x && i < right) {
            i++;
        }
        while(vet[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = vet[i];
            vet[i] = vet[j];
            vet[j] = y;
            i++;
            j--;
        }
    }

    if(j > left) {
        quick_sort(vet, left, j);
    }
    if(i < right) {
        quick_sort(vet, i, right);
    }
}