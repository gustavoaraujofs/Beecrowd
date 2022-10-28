#include <stdio.h>

int main(){
	int A1, A2, A3,t1, t2, t3, menor;
	scanf ("%d %d %d",&A1, &A2, &A3);
	
	t1 = A1*0 + A2*2 + A3*4;
	t2 = A1*2 + A2*0 + A3*2;
	t3 = A1*4 + A2*2 + A3*0;
	
	if (t1 <= t2){
		menor = t1;
	}else{
        menor = t2;
	}if(menor >= t3){
		menor = t3;
	}
	printf ("%d\n",menor);
	return 0;
}