#include<stdio.h>
#include<conio.h>

int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the number of elements");
	scanf("%d",&n);
	
	printf("%d%d",a,b);
	
	for(i=2;i<n;i++)
	{
			c=a+b;
			
	    printf("%d",c);
		a=b;
		b=c;
	
		
		
	}
	
	return 0;
}