#include<conio.h>
#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the number check whether its even or odd");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("Number is odd");
	}
	
	else 
	{
		printf("Number is Even");
	}
}