#include <stdio.h>
int main()
{
	int m,n,m1,n1,i,j,k; 
	printf("Name - Somiya Agarwal \n");
	printf("Roll no. - 2100321530167 \n");  
	printf("Enter the no. of rows & columns of 1st array..");    
	scanf("%d%d",&m,&n);
	printf("Enter the no. of rows & columns of 2nd array..");    
	scanf("%d%d",&m1,&n1);
	if(n!=m1){
		printf("Matrix multiplication is not possible");
	}
	else{
		
		int a[m][n],b[m1][n1],mul[m][n1];  
	printf("Enter the elements of 1st array..\n");         
	for(i=0;i<m;i++){    
		for(j=0;j<n;j++){    
			scanf("%d",&a[i][j]);
		}    
	}printf("Enter the elements of 2nd array..\n");
	for(i=0;i<m1;i++){    
		for(j=0;j<n1;j++){    
			scanf("%d",&b[i][j]);
		}    
	}for(i=0;i<m;i++){    
		for(j=0;j<n1;j++){    
			mul[i][j]=0;    
			for(k=0;k<n;k++){    
				mul[i][j] += a[i][k]*b[k][j];    
			}    
		}    
	}printf("Multiplication of both arrays is...\n");
	for(i=0;i<m;i++){    
		for(j=0;j<n1;j++){    
			printf("%d ",mul[i][j]);    
		}printf("\n");   
	} 
	}
	           
}
