#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],i,j,k,n,f,count;
	printf("enter the number that you are interested in");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		f=0;
		for(k=0;k<i;k++)
		{
			if(a[i]==a[k])
			{
				f=1;
				break;
			}
		}
	}
	
	if(f!=1)
	{
		count=0;
		for(j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		printf("%d is present %d times\n",a[i],count);
	}
}