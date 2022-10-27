#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, cont = 0;
    while(scanf("%d", &n) != EOF){
        int N[n];
        char lado[n];

        for(i = 0;i < n;i++){
            scanf("%d %c", &N[i], &lado[i]);
        }

        for(i = 0;i < n;i++){
            for(j = i;j < n;j++){
                if(N[i] == N[j]){
                    if((lado[i] == 'E' && lado[j] == 'D') || (lado[i] == 'D' && lado[j] == 'E')){
                        cont++;
                        N[j] = 0;
                        lado[j] = ' ';
                        break;
                    }
                }
            }
        }
        printf("%d\n", cont);
        cont = 0;
    }

    return 0;
}