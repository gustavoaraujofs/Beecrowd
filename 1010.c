#include <stdio.h>

int main() {
	int N1, N2, N3, N4;
	float V1, V2, T;
	
	scanf ("%d", &N1);
	scanf ("%d", &N2);
	scanf ("%f", &V1);
	
	scanf ("%d", &N3);
	scanf ("%d", &N4);
	scanf ("%f", &V2);
	
	T = (N2 * V1) + (N4 * V2);
	
	printf ("VALOR A PAGAR: R$ %.2f\n",T);
	return 0;
}