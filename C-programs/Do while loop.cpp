#include<stdio.h>
#include<conio.h>

int main()
{
	int num,r=1;
	
	
	printf("enter the number to find the factorial of ");
	scanf("%d",&num);

	while(num!=0)
	{
		r=num*r;
		
		num--;
	}
	
printf("The factorial of the given is %d",r);
}