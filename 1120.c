#include <stdio.h>

int main() {
	char N[10100], c[10100];
	int D, i, j, k, Z, cont;
	long long int num = 0;
	while(1) {
		scanf("%d %s",&D,&N);
        if(D == 0 && N[0] == '0') {
            break;
        }
            i=0;
            j=0;
            Z=0;
            num=0;
            cont=0;
        while(1){
            if(N[i] == '\0'){
                break;
			}else if(N[i] == D + 48){
				i++;
			}else{
				c[j] = N[i];
				if(j == Z)
                    cont++;
				if(N[i] == '0')
                    Z++;
                    i++;
                    j++;
			}
        }
	c[j]='\0';
    if(j == 0){
        printf("0\n");
	}
    else if(j == Z){ 
        printf("%lld\n", num);
	}
    else if(cont > 0){
        for(k = cont-1; c[k] != '\0'; k++){
            printf("%d",c[k]-48);
        }
        printf("\n");
    }
    else 
    printf("%s\n", c);
    }
    return 0;
}