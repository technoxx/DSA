//Cartesian product of two sets
#include <stdio.h>
int main(){
    int i,j,n1,n2;
    printf("Enter the size of first set...\n");
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second set...\n");
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    printf("The cartesian product is...\n");
    printf("[");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("(%d,%d)",a[i],b[j]);
        }
    }printf("]");
}