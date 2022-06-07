#include<stdio.h>
#include<string.h>

int main()
{
	char s1[20],s2[20];
	
	int i;
	
	printf("Enter Source string ");
	gets(s1);
	
	printf("You have entered the following string ");
	puts(s1);
	
		i=0;
	
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		
		i++;
	}
	
	s2[i]='\0';
	
	printf("The second string s2 After copying s1 is given as \n ");
	
	puts(s2);
	
}