//Stack implementation from LL
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
int main (){
    struct node *top,*start,*r;
    top=NULL;
    int value,x=1;
    while(x==1){
        printf("Enter the value of data to be inserted\n");
        scanf("%d",&value);
        if(top==NULL){
            r=(struct node*)malloc(sizeof(struct node));
            r->data=value;
            r->link=NULL;
            top=r;
        }else{
            r=(struct node*)malloc(sizeof(struct node));
            r->data=value;
            r->link=top;
            top=r;
        }
        printf("Want to enter more? press 1\n");
        scanf("%d",&x);
    }
    r = top;
    while(r!=NULL){
        printf("%d ->",r->data);
        r = r->link;
    }
    printf("\n");
    printf("Deletion operation...\n");
    int *temp;
    x=1;
    while(x==1){
        printf("Enter the value of data to be deleted\n");
        scanf("%d",&value);
        if(top==NULL){
            printf("Stack is empty\n");
            break;
        }else{
            temp = top;
            top = top->link;
            free(temp);
        }
        printf("Want to enter more? press 1\n");
        scanf("%d",&x);
    }
    r = top;
    while(r!=NULL){
        printf("%d ->",r->data);
        r = r->link;
    }
}