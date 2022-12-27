//Wap to create two sets and find their intersection
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
	k=0;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i] == b[j]){
				c[k] = a[i];
				k++;
				break;
			}
		}
 	}if(k==0){
 		printf("No elements in common");
 	}else{
 		printf("Intersection of both set is..");
		for(i=0;i<k;i++){
			printf("%d \n",c[i]);
		}
 	}
 
}
