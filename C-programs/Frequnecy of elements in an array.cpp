#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],i,n,freq=0,key;
	
	printf("\nEnter the number of elements of an array that you are interested in");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("enter the element that you want to find frequency for");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	if(a[i]==key)
	freq++;
	
	printf("\nfrequency of elements %d is %d" ,key,freq);
	
	return 0;
}