#include <stdio.h>
#include <stdlib.h>
void Enque(int [],int ,int *,int *,int);
int Deque(int[],int ,int *,int *);
void display(int [],int,int,int);
int main(){
    int N,x;
    printf("Enter the capacity of circular queue: ");
    scanf("%d",&N);
    int Q[N],front=-1,rear=-1;

    printf("Enter the value to be enqueued \n");
    scanf("%d",&x);
    Enque(Q,N,&front,&rear,x);

    printf("Enter the value to be enqueued \n");
    scanf("%d",&x);
    Enque(Q,N,&front,&rear,x);

    printf("Enter the value to be enqueued \n");
    scanf("%d",&x);
    Enque(Q,N,&front,&rear,x);

    display(Q,front,rear,x);

    x = Deque(Q,N,&front,&rear);
    printf("Value deleted is %d\n",x);

    x = Deque(Q,N,&front,&rear);
    printf("Value deleted is %d\n",x);

    display(Q,front,rear,N);

    printf("Enter the value to be enqueued\n");
    scanf("%d",&x);
    Enque(Q,N,&front,&rear,x);

    printf("Enter the value to be enqueued\n");
    scanf("%d",&x);
    Enque(Q,N,&front,&rear,x);

    printf("Enter the value to be enqueued\n");
    scanf("%d",&x);
    Enque(Q,N,&front,&rear,x);

    display(Q,front,rear,N);

    return 0;
}
void Enque(int Q[],int N,int *f,int *r, int x){
    if(((*r)+1)%N==(*f)){
        printf("Queue overflow\n");
        exit(1);
    }else{
        if((*f)==-1){
            (*f)++;
            (*r)++;
            Q[*r]=x;
        }else{
            (*r) = ((*r)+1)%N;
            Q[*r]=x;
        }
    }
}

int Deque(int Q[],int N,int *f,int *r){
    int y;
    if((*f)==-1){
        printf("Queue underflow\n");
        exit(1);
    }else{
        if((*f)==(*r)){
            y=Q[*f];
            (*f)=-1;
            (*r)=-1;
            return y;
        }else{
            y=Q[*f];
            (*f)=((*f)+1)%N;
            return y;
        }
    }
}
void display(int Q[],int f,int r,int N){
    if(f==-1){
        printf("Queue is empty\n");
    }else{
        while(f!=r){
            printf("%d-->",Q[f]);
            f= (f+1)%N;
        }
    }
    if(f==r){
        printf("%d\n",Q[f]);
    }
}