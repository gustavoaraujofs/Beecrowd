#include <stdio.h>

int main (){
	int A, B;
	double C, S;
	
	scanf ("%d%d",&A,&B);
	scanf ("%lf",&C);
	
	S = B * C;
	
	printf ("NUMBER = %d\n",A);
	printf ("SALARY = U$ %.2lf\n",S);
	
	return 0;
}