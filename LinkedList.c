#include <stdio.h>
#include <stdlib.h>
/*struct std{
        char name[20];
        int age;
    };

struct stu{
        int fr_l;
        struct stu *link;
    };

int main(){
   struct std s1,s2,*so;
    printf("Size is..%d\n",sizeof(struct std));
    so  = &s2;
    printf("Address of s2...%u and address of *s...%u\n",s2,so);
    printf("Value..%u\n",so);
    scanf("%s %d",&(so->name),&(so->age));
    printf("Details are...%s %d",(so->name),(so->age));
    struct stu *s,*temp;
    s = NULL;
    int x;
    scanf("%d",&x);

    temp = (struct stu *)malloc(sizeof(struct stu));
    temp->fr_l=x;
    temp->link = NULL;
    s = temp;

    temp = (struct stu *)malloc(sizeof(struct stu));
    temp->fr_l=x+90;
    temp->link = NULL;
    s->link = temp;

    printf("%d %u\n",s->fr_l,s->link);
    s = s->link;
    printf("%d %u\n",s->fr_l,s->link);
    
}*/

struct node{
    int data;
    struct node *link;
};
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
        if(start==NULL){
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = value;
            temp->link = NULL;
            start = temp;
        }else{
            temp = start;
            while(temp->link!=NULL){
                temp = temp->link;
            }
            r = (struct node *)malloc(sizeof(struct node));
            r->data = value;
            temp->link = r;
            r->link = NULL;
        }
        printf("want to insert more? press 1 ");
        scanf("%d",&x);
    }
    printf("\n");
    temp = start;
    int count = 0;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp = temp->link;
        
        count++;
    }printf("\n %d nodes are in ll\n",count);


    printf("Deletion in the ll\n");
    x = 1;
    while(x){
        //Deletion at the beginning
       if(start==NULL){
        printf("List is empty");
        break;
       }else{
        temp = start;
        start = temp->link;
        free(temp);
       }
       printf("want to delete more? press 1 ");
        scanf("%d",&x);
    }
    printf("\n");
    temp = start;
    count = 0;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp = temp->link;
        count++;
    }printf("\n %d nodes are in ll\n",count);
    return 0;
}
