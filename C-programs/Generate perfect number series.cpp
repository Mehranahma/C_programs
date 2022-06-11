#include<stdio.h>
#include<conio.h>

int main()
{
	int f,lt,num ,i,sum=0,a;
	
	printf("enter the first number");
	scanf("%d",&f);
	
	printf("enter the limit");
	scanf("%d",&lt);
	
	for(num=f;num<=lt;num++)
	{
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum=sum+i;
		
	}
	
	if(num==sum)
	printf("The perfect number from the given limits are %d",num);

}


}