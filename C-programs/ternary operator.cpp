#include<stdio.h>
#include<conio.h>

int main()
{
	int marks;
	printf("enter marks of the student 0-100");
	scanf("%d",&marks);
	
   switch(marks/10)
  {
  	
   case 1:
   printf("2nd position");
   	break;

   case 2:
   printf("3rd positon");
   break;
   
    case 3:
   printf("Distintion");
    break;
   
   case 4:
   
   printf("2nd division");
   break;
   
   case 5:
   
   printf("3rd division");
   break;
   
   case 6:
   
   printf("4th division");
   break;
   
   default: 
   printf("1st position");
   break;
   
}
    return 0;
}