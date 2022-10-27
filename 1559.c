#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int mat[6][6], N, i, j, k, left = 0, down = 0, up = 0, rigth = 0, cont, v=0;
    char vet[25] = {""};

    scanf("%d", &N);

    for(j = 0;j < 6;j++){
        for(k = 0;k < 6;k++){
            mat[j][k] = -11;
        }
    }

    for(i = 0;i < N;i++){
        for(j = 0;j < 4;j++){
            for(k = 0;k < 4;k++){
                scanf("%d", &mat[j][k]);
                if(mat[j][k] == 2048)
                    v = 1;
            }
        }

        for(j = 0;j < 4;j++){
            for(k = 0;k < 4;k++){
                if(mat[j][k] != 0){
                    if(mat[j+1][k] == 0 || mat[j+1][k] == mat[j][k]){
                        down++;
                    }
                    if(j != 0){
                        if(mat[j-1][k] == 0 || mat[j-1][k] == mat[j][k]){
                            up++;
                        }
                    }
                    if(mat[j][k+1] == 0 || mat[j][k+1] == mat[j][k]){
                        rigth++;
                    }
                    if(mat[j][k-1] == 0 || mat[j][k-1] == mat[j][k]){
                        left++;
                    }
                }
            }
        }
        if(v == 1){
            printf("NONE\n");
            v = 0;
            vet[0] = '\0';
            down = 0;
            left = 0;
            rigth = 0;
            up = 0;
        }else if(down == 0 && up == 0 && rigth == 0 && left == 0){
            printf("NONE\n");
        }else{
            if(down != 0){
                if(left != 0 || rigth != 0 || up != 0){
                    strcat(vet, "DOWN ");
				}else{
                    strcat(vet, "DOWN");
                }
            }
            if(left != 0){
                if(rigth != 0 || up != 0){
                    strcat(vet, "LEFT ");
                }else{
                    strcat(vet, "LEFT");
				}
            }
            if(rigth != 0){
                if(up != 0){
                    strcat(vet, "RIGHT ");
                }else{
                    strcat(vet, "RIGHT");
				}
            }
            if(up != 0){
                strcat(vet, "UP");
            }
            printf("%s\n", vet);
            vet[0] = '\0';
            down = 0;
            left = 0;
            rigth = 0;
            up = 0;
        }

    }
    return 0;
}