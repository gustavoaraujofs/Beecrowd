#include <stdio.h>

int main() {
	char N;
	double S, V, T;
	
	scanf ("%s", &N);
	scanf ("%lf%lf",&S,&V);
	
	T = S + (V * 0.15);
	
	printf ("TOTAL = R$ %.2lf\n",T);
	return 0;
}