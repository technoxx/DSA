#include<stdio.h>
int main()
{
    int i,n, x, f, l, mid;
    printf("Name - Somiya Agarwal \n");
	printf("Roll no. - 2100321530167 \n");
    printf("Enter the no. of elements..");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the sorted array elements..");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to be searched..");
    scanf("%d", &x);
    f = 0;
    l = n-1;
    mid = (f+l)/2;
    while(f <= l)
    {
        if(arr[mid]<x)
            f = mid+1;
        else if(arr[mid]==x)
        {
            printf("The number found at position %d", mid+1);
            break;
        }
        else
            l = mid-1;
        mid = (f+l)/2;
    }
    if(f>l)
        printf("The number is not found in given Array");
}
