#include <stdio.h>

int main(){
	int N, cont = 0;
	scanf("%d",&N);
	printf("%d\n",N);
	while(N >= 100){
		N - 100;
		N = N - 100;
		cont++;
	}
	printf("%d nota(s) de R$ 100,00\n",cont);
	cont = 0;
	while(N >= 50){
		N - 50;
		N = N - 50;
		cont++;
	}
	printf("%d nota(s) de R$ 50,00\n",cont);
	cont = 0;
	while(N >= 20){
		N - 20;
		N = N - 20;
		cont++;
	}
	printf("%d nota(s) de R$ 20,00\n",cont);
	cont = 0;
	while(N >= 10){
		N - 10;
		N = N - 10;
		cont++;
	}
	printf("%d nota(s) de R$ 10,00\n",cont);
	cont = 0;
	while(N >= 5){
		N - 5;
		N = N - 5;
		cont++;
	}
	printf("%d nota(s) de R$ 5,00\n",cont);
	cont = 0;
	while(N >= 2){
		N - 2;
		N = N - 2;
		cont++;
	}
	printf("%d nota(s) de R$ 2,00\n",cont);
	cont = 0;
	while(N >= 1){
		N - 1;
		N = N - 1;
		cont++;
	}
	printf("%d nota(s) de R$ 1,00\n",cont);
	return 0;
}