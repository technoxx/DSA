#include <stdio.h>
int main(){
	int i,j,n,e;
	printf("Name - Somiya Agarwal \n");
	printf("Roll no. - 2100321530167 \n");
	printf("Enter the no. of elements..");
	scanf("%d",&n);
	int a[n];
	printf("Enter the element to be searched..");
	scanf("%d",&e);
	for(i=0;i<n;i++){
		if(a[i] == e){
			printf("The element is at position..%d",i+1);
			break;
		}if(i==n){
			printf("Element is not presnt in the array");
		}
	}
}
