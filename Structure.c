#include <stdio.h>
struct points{
		int x,y;
	};
void initializer(struct points []);
void display(struct points [])

int main(){
	struct points p[3];
	
	
}
void initializer(struct points p[]){
	int i;
	for(i=0;i<3;i++){
		scanf("%d%d",&p[i].x,&p[i].y);
	}
}
void display(struct points p[]){
	int i;
	for(i=0;i<3;i++){
		printf("%d %d",p[i].x,p[i].y);
	}
}
