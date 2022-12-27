#include <stdio.h>
int main(){
	int n,a[n],i,m,in;
	printf("enter the size of array..");
	scanf("%d",&n);
	printf("enter the elements..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the pos..");
	scanf("%d",&in);
	printf("Enter the element to add..");
	scanf("%d",&m);
	for(i=n-1;i>=in-1;i--){
		a[i+1]=a[i];
		a[i] = m;
	}for(i=0;i<=n;i++){
		printf("%d \n",a[i]);
	}
	
}
