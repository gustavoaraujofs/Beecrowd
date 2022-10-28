#include <stdio.h>

int main (){
	int i, j, n;
	while (1 == scanf ("%d",&n)){
		if (n == 0)
            break;
		for (i = 1;i <= n;i++){
			printf ("%3d",i);
			for (j = i - 1;j >= 1;j--)
                printf (" %3d",j);
			for (j = 2;j <= n - i + 1;j++)
                printf (" %3d",j);
            printf ("\n");
		}
		printf ("\n");
	}
	return 0;
}