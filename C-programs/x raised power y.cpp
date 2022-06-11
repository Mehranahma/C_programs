#include<stdio.h>
#include<conio.h>

int main()
{
	int num ,i,sum=0;
	
	printf("enter the number to check whether its perfect or not");
	scanf("%d",&num);
	
	for(i=1;i<num-1;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	
	if(sum==num)
	printf("number is perfect");
	else 
	printf("number is not perfect ");
	
}