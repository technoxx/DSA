#include <stdio.h>
int main(){
	int n1,n2,a[100],i,j,k,b[100],c[100];
	printf("enter the size of 1st array..");
	scanf("%d",&n1);
	printf("enter the elements..");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}printf("enter the size of 2nd array..");
	scanf("%d",&n2);
	printf("enter the elements..");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}k=n1;
	for(i=0;i<n2;i++){
		a[i+k] = b[i];
	}
	for(i=0;i<n1+n2;i++){
		if(a[i]>a[i+1]){
			a[i+1] = a[i];
		}
	}
	printf("Merged array is..");
	for(i=0;i<n1+n2;i++){
		printf("%d \n",a[i]);
	}
}
