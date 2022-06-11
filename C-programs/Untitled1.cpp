#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[20],i,n,sum=0;
	printf("enter the number of elements in an array but not more than 20/n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	
	}
	
	printf("sum of array is =%d",sum);
	
	return 0;
	
	
}