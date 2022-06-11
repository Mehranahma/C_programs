#include<stdio.h>
#include<conio.h>

 main()
 
{
	char name[20];
	int i,count=0;
	
	printf("enter any string \n");
	gets(name);
	
	printf("you have entered the following string \n");
	puts(name);
	
	i=0;
	
	while(name[i]!= '\0')
	{
		count=count+1;
		
		i++;
	}
	
	printf("The length of the above given string is %d characters\n",count);
	
	getch();

}