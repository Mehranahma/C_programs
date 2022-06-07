#include<conio.h>
#include<stdio.h>
 int main()
 {
 	int arr[10],i,j,n,t;
 	
 	printf("enter the number of elements in an array that you are intereseted in ");
 	scanf("%d",&n);
 	
 	for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
	
	 } 	
	 
	 printf("array before sort");
	 for(i=0;i<n;i++)
	 {
	 	 printf(" a[%d]=%d \n",i ,arr[i]);
	 }
	//logic for bubble sort
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
				
			}
			
	}
}
		printf("array after sort");
		for(i=0;i<n;i++)
		{
		
			printf(" a[%d]=%d ",i,arr[i]);
			
		}
		
}
 