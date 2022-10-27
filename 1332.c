#include <stdio.h>
#include <string.h>

int main(){
	int N,cont = 0;
	char x[10];
	scanf("%d",&N);
	while(N--){
		scanf("%s",&x);
		if(strlen(x) == 5){
			printf("3\n");
		}else{
			if((x[0] == 'o') && (x[1] == 'n') || (x[1] == 'n' && x[2] == 'e') || (x[0] == 'o' && x[2] == 'e')){
				printf("1\n");
			}else{
				printf("2\n");
			}
	    }
	}
	return 0;
}