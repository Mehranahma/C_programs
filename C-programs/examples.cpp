#include<stdio.h>
#include<conio.h>

int main()
{
 int x,y;
 
 printf("Enter the value of x \n");
 scanf("%d",&x);
 
 printf("Enter the value of y \n");
 scanf("%d",&y);
 
 printf("value before swapping is %d and %d \n",x,y);
 
 x=(x+y);
 y=(x-y);
 x=(x-y);

 printf("Value after swapping \n Value of x is %d and Value of y is %d",x,y);
}