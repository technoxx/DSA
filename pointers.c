#include <stdio.h>
#define n (3)
int main(){
	int a[n][n],i,j;
	for(i=0;i<n;i++){    
		for(j=0;j<n;j++){    
			printf("%d ",&a[i][j]);
		}
		printf("\n");    
	}
	
}
