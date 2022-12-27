//WRITE THE PROGRAM TO PERFORM THE POWER SET ON THE GIVEN SET
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,temp,n;
    printf("Enter the no. of elements of set...");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements...");
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
    for(i=0;i<pow(2,n);i++){
        temp=i;
        printf("{");
        for( j=0;j<n;j++){
            if(temp%2==1){
            	printf("%d",a[j]);
			}
            temp=temp/2;

        }
        printf("}");
    }
}

