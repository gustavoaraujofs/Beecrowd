#include <stdio.h>
#include <math.h>

struct ponto{
	double p1x1, p2x2, p1y1, p2y2;
};
int main (){
	struct ponto pontos;
	double D;
	
	scanf ("%lf %lf", &pontos.p1x1, &pontos.p1y1);
	scanf ("%lf %lf", &pontos.p2x2, &pontos.p2y2);
	
	D = sqrt((pontos.p1x1 - pontos.p2x2)*(pontos.p1x1 - pontos.p2x2) + (pontos.p1y1 - pontos.p2y2)*(pontos.p1y1 - pontos.p2y2));
	
	printf ("%.4lf\n", D);
	return 0;
}