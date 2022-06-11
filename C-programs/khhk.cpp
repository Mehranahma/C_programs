#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[20],i,n,t,j;
	
	printf("Enter the number of elements of an interested in ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	
	printf("array before sort");
	
	for(i=0;i<n;i++)
	{
		printf("arr=%d,n=%d\n,arr[i],n");
	}
}