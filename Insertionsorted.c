#include <stdio.h>
int main(){
	int n,i,a[n];
	printf("enter the size of array..");
	scanf("%d",&n);
	printf("enter the elements..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i+1]-a[i] != 1){
			a[i+1] = a[i] + 1;
		}
	}for(i=0;i<=n;i++){
		printf("%d \n",a[i]);
	}
}
