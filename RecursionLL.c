#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
void insert(struct node ** ,int);
int main(){
    struct node *start, *temp,*r;
    start = NULL;
    int x,value;
    x = 1;
    printf("Insertion in the ll\n");
    while(x){

        //Insertion at the end
        printf("Enter the value to be inserted\n");
        scanf("%d",&value);
        
        insert(&start,value);
        printf("want to insert more? press 1 ");
        scanf("%d",&x);
    }
    printf("\n");
    display(start);
    printf("\n");
    int count_ll = count(start);
    printf("Count is..%d\n",count_ll);
    return 0;
}
void insert(struct node **q,int data){
    if((*q)==NULL){
        struct node *r;
        r = (struct node *)malloc(sizeof(struct node));
        r->data = data;
        (*q) = r;
        (*q)->link = NULL; //start ->link = NULL i.e. start me jo value hai uske addr pe jaake uska link NULL karna hai
    }else{
        insert(&((*q)->link),data);
    }
}
void display(struct node *q){
    if(q==NULL){
        printf("no data \n");
    }else{
        printf("%d->",q->data);
        display(q->link);
    }
}

int count(struct node *q){
    if(q==NULL){
        return 0;
    }else{
        return 1 + count(q->link);
    }
}