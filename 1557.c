#include <stdio.h>
#include <math.h>

int main(){
    int N = -1, i, j, k, Num = 1, num = 1, cont, cont1;
    char a[15];

    while (N != 0){
        scanf("%d", &N);

        cont = pow(2,  (N+(N-1))-1);

        sprintf(a,"%d",cont);
        cont1 = strlen(a);

        if(N > 0 && N <= 15){
            for(j = 0;j < N;j++){
                Num = num;
                for(i = 0;i < N;i++){
                    //matriz[j][i] = Num;5
                    if (i==0){
                        printf("%*d",cont1, Num);
                        Num *= 2;
                    }else{
                        printf(" %*d",cont1, Num);
                        Num *= 2;
                    }
                }
                printf("\n");
                num *=2 ;
            }
            printf("\n");
            num = 1;
        }
    }
    return 0;
}