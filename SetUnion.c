//Wap to create two sets and find their union
#include <stdio.h>
int main(){
	int n1,n2,a[100],i,j,k,b[100],c[100];
	printf("enter the size of 1st set..");
	scanf("%d",&n1);
	printf("enter the elements..");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}printf("enter the size of 2nd set..");
	scanf("%d",&n2);
	printf("enter the elements..");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++){
		c[i] = a[i];
	}
	for(i=0;i<n2;i++){
		c[i+n1] = b[i];
	}printf("Union of both set is..");
	for(i=0;i<n1+n2;i++){
		k=0;
		for(j=i+1;j<n1+n2;j++){
			if(c[i] == c[j]){
				k=1;
				break;
			}
		}
		if(k==0){
		printf("%d \n",c[i]);
		}
	}
	
}
	
	
	
	
