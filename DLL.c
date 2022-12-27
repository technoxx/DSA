#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
int main(){
    int x=1,y,value;
    struct node *start, *temp, *r;
    start = NULL;
    printf("Inserting a node in DLL\n");
    while(x==1){
        printf("for insertion at beginning? press  2\n");
        scanf("%d",&y);

        while(y==2){
            printf("insertion in dll at beginning\n");
            printf("Enter the value to be inserted\n");
            scanf("%d",&value);
            if(start==NULL){
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = NULL;
                r->next =  NULL;
                start = r;
            }else{
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = NULL;
                r->next = start;
                start->prev = r;
                start = r;
            }printf("want more nodes to be ins. at beginning? press 2\n");
            scanf("%d",&y);
        }printf("want more nodes to be inserted? press 1\n");
        scanf("%d",&x);
    }
    printf("\n");
    temp = start;
    int count =0;
    while(temp!=NULL){
        printf("%d <->",temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n");
    printf("no. of nodes in dll is %d\n",count);
    printf("deletion at beg. in dll\n");
    x = 1;
    while(x==1){
        printf("for deletion at beginning, press 2\n");
        scanf("%d",&y);
        while(y==2){
            if(start==NULL){
                printf("dll is empty\n");
                break;
            }else{
                if(start->next!=NULL){
                    temp = start;
                    start = start->next;
                    start->prev = NULL;
                    free(temp);
                }else{
                    free(start);
                    start = NULL;
                }
            }printf("want more nodes to be del. at beginning? press 2\n");
            scanf("%d",&y);
        }printf("want more nodes to be deleted? press 1\n");
        scanf("%d",&x);
    }
    printf("\n");
    temp = start;
    count =0;
    while(temp!=NULL){
        printf("%d <->",temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n");
    printf("no. of nodes in dll is %d\n",count);
    return 0;
}