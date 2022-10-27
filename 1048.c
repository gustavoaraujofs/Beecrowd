#include <stdio.h>

int main(){
	float N, NS;
	scanf("%f",&N);
	if(N <= 400){
		NS = N * 0.15;
		printf("Novo salario: %.2f\n",N + NS);
		printf("Reajuste ganho: %.2f\n",NS);
		printf("Em percentual: 15 %%\n");
	}else if(N >= 400.01 && N <= 800){
		NS = N * 0.12;
		printf("Novo salario: %.2f\n",N + NS);
		printf("Reajuste ganho: %.2f\n",NS);
		printf("Em percentual: 12 %%\n");
	}else if(N >= 800.01 && N <= 1200){
		NS = N * 0.10;
		printf("Novo salario: %.2f\n",N + NS);
		printf("Reajuste ganho: %.2f\n",NS);
		printf("Em percentual: 10 %%\n");
	}else if(N >= 1200.01 && N <= 2000){
		NS = N * 0.07;
		printf("Novo salario: %.2f\n",N + NS);
		printf("Reajuste ganho: %.2f\n",NS);
		printf("Em percentual: 7 %%\n");
	}else{
		NS = N * 0.04;
		printf("Novo salario: %.2f\n",N + NS);
		printf("Reajuste ganho: %.2f\n",NS);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}