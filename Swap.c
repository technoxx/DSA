#include<stdio.h>
void main()
{
int num1, num2 ;
void swap(int,int) ; // function declaration
num1 = 10 ;
num2 = 20 ;
printf("\nBefore swap: num1 = %d, num2 = %d", num1, num2) ;
swap(num1, num2) ; // calling function
printf("\nAfter swap: num1 = %d\nnum2 = %d", num1, num2);
}	
void swap(int a, int b)  // called function
{
int temp ;
temp = a ;
a = b ;
b = temp ;
}

