#include<iostream>
#include<conio.h>
#include<stdio.h>

void add();
void add(int x,int y);
void add(int x, float y);

int main()
{
	int a=10,b=20; 
	float c=15.00;
	add(a,b);
	add();
	add(a,c);
	
	
	void add();
	{
		 std::cout <<"hello world ";
	}
	
	void add(int x,int y)
	{
		int z;
	
		z=x+y;
		cout<<"sum is "<<z;
	}
	
	void add(int a,int c)
	{
		int z;
		
		z=a+c;
		
		cout<<"The sum is" <<z;
	}
}