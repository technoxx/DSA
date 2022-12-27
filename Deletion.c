#include <stdio.h>
int main(){
	int n,a[100],i,in;
	printf("enter the size of array..");
	scanf("%d",&n);
	printf("enter the elements..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}printf("Enter the position where u want to delete..");
	scanf("%d",&in);
	if(in>n){
		printf("Deletion is not possible\n");
	}else{
		for(i=in-1;i<n-1;i++){
			a[i] = a[i+1];
	 	}
	}printf("Final array is..");
	for(i=0;i<n-1;i++){
		printf("%d \n",a[i]);
	}
}
