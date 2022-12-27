#include <stdio.h>
void sqr(int []);
int main(){
	int i;
	int a[] = {10,20,30,40,50};
	for(i=0;i<5;i++){
		printf("%d \n",a[i]);
	}
	printf("After squaring...\n");
	sqr();
	for(i=0;i<5;i++){
		printf("%d \n",a[i]);
	}
}
void sqr(){
	int i;
	for(i=0;i<5;i++){
		*p = *p**p;
		p++;
	}
	
}
