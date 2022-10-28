#include <stdio.h>

int main (){
	int N, i, j, M;
	
	while (1 == scanf ("%d",&N)){
		if (N == 0)
			break;
		for (i = 1;i <= N;i++){
			for (j = 1;j <= N;j++){
				M = i;
				if (j < M)
					M = j;
		
				if (N - i + 1 < M)
					M = N - i + 1;
					
				if (N - j + 1 < M)
					M = N - j + 1;
					printf ("%3d",M);
					if (j < N){
						printf (" ");
					}else{
						printf ("\n");
				}
			}
		}
		printf ("\n");
	}
	return 0;
}