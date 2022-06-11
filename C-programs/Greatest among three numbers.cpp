#include<stdio.h>
#include<conio.h>


int main()
{
	int a,b,c;
	
	printf("enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b&&a>c)
	{
		printf("A is Greatest");
	}
	if(b>a&&b>c)
	
	{
		printf("B is Greatest");
	}
	
	
	if(c>a&&c>b)
	{
		printf("C is greatest");
	}
	
}