#include <stdio.h>

int main (){
	
	double A, B, C, T, AC, TRA, Q, R, PI = 3.14159;
	
	scanf ("%lf",&A);
	scanf ("%lf",&B);
	scanf ("%lf",&C);
	
	T = (A * C) / 2;
	AC = (PI * (C * C));
	TRA = ((A + B) * C) / 2;
	Q = B * B;
	R = A * B;
	
	printf ("TRIANGULO: %.3lf\n",T);
	printf ("CIRCULO: %.3lf\n",AC);
	printf ("TRAPEZIO: %.3lf\n",TRA);
	printf ("QUADRADO: %.3lf\n",Q);
	printf ("RETANGULO: %.3lf\n",R);
	
	return 0;
}