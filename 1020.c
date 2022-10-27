#include <stdio.h>

int main(){
	int N, cont = 0;
	scanf("%d",&N);
	while(N >= 365){
		N - 365;
		N = N - 365;
		cont++;
	}
	printf("%d ano(s)\n",cont);
	cont = 0;
	while(N >= 30){
		N - 30;
		N = N - 30;
		cont++;
	}
	printf("%d mes(es)\n",cont);
	cont = 0;
	while(N >= 1){
		N - 1;
		N = N - 1;
		cont++;
	}
	printf("%d dia(s)\n",cont);
	return 0;
}