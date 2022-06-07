#include<stdio.h>
#include<conio.h>

 main()
 
{
	char name1[20],name2[20];
	int i,count=0;
	
	printf("enter any string for n1 \n");
	gets(name1);
	printf("you have entered the following string for n1 \n");
	puts(name1);
	
	printf("enter any string for n2");
	gets(name2);
	printf("you have entered the following string for n2 \n");
	puts(name2);
	
	i=0;
	
	while(name1[i]!= '\0') 
	{
		count=count+1;
		
		i++;
	}
	//name1[count]=' ';
	//count =count+1;
	i=0;
	while(name2[i] !='\0')
	{
		name1[count]=name2[i];
		
		i++;
		count++;
	}
	
	name1[count]='\0';
	
	printf(" The first string will now be  ");
	puts(name1);
	
	printf("The second string is like as it was and is given as \n");
	puts(name2);
	getch();

}