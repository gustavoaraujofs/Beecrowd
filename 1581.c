#include <stdio.h>
#include <string.h>

int main(){
	int N,i,K,cont = 0;
	char S[K][21];
	scanf("%d",&N);
	while(N--){
		scanf("%d",&K);
		char S[K][21];
		for(i = 0;i < K;i++){
			scanf("%s",S[i]);
		}
		i = 1;
		while(i < K){
			if(strcmp(S[0],S[i]) != 0){
				cont = 1;
				break;
			}
			cont = 0;
			i++;
		}
		if(cont == 0){
			printf("%s\n",S[0]);
		}else{
			printf("ingles\n");
		}
	}
	return 0;
}