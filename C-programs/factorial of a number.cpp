#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,i,p=1;
	
	printf("enter the base");
	scanf("%d",&x);
	
	printf("enter the power");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		p=p*x;
		
	}
	
	printf("x raised power y is %d",p);
	
}