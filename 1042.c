#include <stdio.h>

int main(){
	int a,b,c,V[3];
	scanf("%d%d%d",&a,&b,&c);
	if(a < b && a < c && b < c){
		V[0] = a;
		V[1] = b;
		V[2] = c;
	}else if(a < b && a < c && b > c){
		V[0] = a;
		V[1] = c;
		V[2] = b;
	}else if(a > b && b < c && a < c){
		V[0] = b;
		V[1] = a;
		V[2] = c;
	}else if(a > b && b < c && a > c){
		V[0] = b;
		V[1] = c;
		V[2] = a;
	}else if(a > b && b > c && a > c){
		V[0] = c;
		V[1] = b;
		V[2] = a;
	}else{
		V[0] = c;
		V[1] = a;
		V[2] = b;
	}
	printf("%d\n%d\n%d\n\n",V[0],
		V[1],
		V[2]);
	printf("%d\n%d\n%d\n",a,b,c);
	return 0;
}