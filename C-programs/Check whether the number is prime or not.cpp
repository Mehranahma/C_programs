#include<stdio.h>
#include<conio.h>

int main()
{
	int f,l,i,j,flag;
	printf("enter the first number ");
	scanf("%d",&f);
	
	printf("enter the limit");
	scanf("%d",&l);
	for(i=f;i<=l;i++)
	{
		
		for(j=2;j<i;j++)
		{
		if(i%j==0)
		{
			flag=1;
			break;
	}	}


	if(flag==0)
	printf("The prime series is %d \n",i);
}
}

