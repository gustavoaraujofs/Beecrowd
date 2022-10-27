#include <stdio.h>

int main(){
	int a, b, c, Mab, M;
	scanf("%d%d%d",&a, &b, &c);
	if(a > b){
		Mab = a;
	}else{
		Mab = b;
	}if(Mab > c){
		M = Mab;
	}else{
		M = c;
	}
	printf("%d eh o maior\n",M);
	return 0;
}