#include <stdio.h>
int main(){
	int n,a[100],i,j,m[100];
	printf("enter the size of array..");
	scanf("%d",&n);
	printf("enter the elements..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	j=0;
	for(i=0;i<n;i++){
		if(a[i+1]-a[i] != 1){
			m[j] = a[i] +1;
			j++;
		}
	}printf("The missing elements..");
	for(i=0;i<j-1;i++){
		printf("%d \n",m[i]);
	}
	
}
