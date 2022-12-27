#include<stdio.h>
#include<stdlib.h>
struct node
{
 struct node *prev;
 int data;
 struct node *next;
};
int main(){
  int x=1,value,y;
  struct node *front,*rear,*temp,*r;
  front = rear = NULL;
  printf("enqueue opn in circular queue via dll \n");
  while(x==1){
    printf("want to enque at rear end? press 2\n");
    printf("want to enque at front end? press 3\n");
    scanf("%d",&y);
    while(y==2){
      printf("enter the value to be enqueued\n");
      scanf("%d",&value);
      if(front==NULL){
        r=(struct node*)malloc(sizeof(struct node));
        r->data=value;
        r->prev=NULL;
        r->next=NULL;
        front=rear=r;
      }else{
        if(front->next==NULL){
          r=(struct node*)malloc(sizeof(struct node));
          r->data=value;
          r->next=front;
          r->prev=rear;
          rear->next=r;
          front->prev=r;
          rear=r;
        }else{
          r=(struct node*)malloc(sizeof(struct node));
          r->data=value;
          r->prev=rear;
          r->next=front;
          front->prev=r;
          rear->next=r;
          rear=r;
        }
      }
      printf("want to enqueue more at rear end? press 2\n");
      scanf("%d",&y);
    }

    while(y==3){
      printf("enter the value to be enqueued\n");
      scanf("%d",&value);
      if(front==NULL){
        r=(struct node*)malloc(sizeof(struct node));
        r->data=value;
        r->prev=NULL;
        r->next=NULL;
        front=rear=r;
      }else{
        if(front->next==NULL){
          r=(struct node*)malloc(sizeof(struct node));
          r->data=value;
          r->next=front;
          front->prev=r;
          front = r;
          front->prev=r;
          rear->next=front;
        }else{
          r=(struct node*)malloc(sizeof(struct node));
          r->data=value;
          r->next=front;
          front->prev=r;
          front=r;
          front->prev = rear;
          rear->next=front;  
        }
      }
      printf("want to enqueue more at front end? press 3\n");
      scanf("%d",&y);
    } 
    printf("want to enqueue more nodes/value ?press 1\n");
    scanf("%d",&x);
  }
  int count=0;
  struct node *p=NULL;
  temp=front;
  while(temp!=p){
    printf("%d <-->",temp->data);
    temp=temp->next;
    p=front;
    count++;
  }
  printf("\n number of nodes in circular queue via dll is\n");
  printf("%d\n",count);

  x=1;
  printf("Deque operation\n");
  while(x==1){
    printf("want to deque at rear end? press 2\n");
    printf("want to deque at front end? press 3\n");
    scanf("%d",&y);

    while(y==2){
      if(front==NULL){
        printf("deque is empty\n");
        break;
      }else{
        if(rear == front){
          temp = front;
          front = rear = NULL;
          free(temp);
        }else{
          temp = rear;
          rear = rear->prev;
          front->prev = rear;
          rear->next = front;
          free(temp);
        }
      }
      printf("want to dequeue more at rear end? press 2\n");
      scanf("%d",&y);
    }

    while(y==3){
      printf("deque at front end\n");
      
      if(front==NULL){
        printf("deque is empty");
        break;
      }else{
        if(front==rear){
          temp = front;
          front=rear=NULL;
          free(temp);
        }else{
          temp = front;
          front = front->next;
          front->prev = rear;
          rear->next = front;
          free(temp);
        }
      }
      printf("want to dequeue more at front end? press 3\n");
      scanf("%d",&y);
    } 
    printf("want to dequeue more nodes/value ?press 1\n");
    scanf("%d",&x);
  }
  count=0;
  p = NULL;
  temp=front;
  while(temp!=p){
    printf("%d <-->",temp->data);
    temp=temp->next;
    p=front;
    count++;
  }
  printf("\n number of nodes in circular queue via dll is\n");
  printf("%d\n",count);

}
