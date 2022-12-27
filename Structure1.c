#include <stdio.h>
#include <stdlib.h>
struct std{
        char name[20];
        int age;
    };

struct stu{
        int fr_l;
        struct stu *link;
    };

int main(){
   /* struct std s1,s2,*so;
    printf("Size is..%d\n",sizeof(struct std));
    so  = &s2;
    printf("Address of s2...%u and address of *s...%u\n",s2,so);
    printf("Value..%u\n",so);
    scanf("%s %d",&(so->name),&(so->age));
    printf("Details are...%s %d",(so->name),(so->age));
    */
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
    
}