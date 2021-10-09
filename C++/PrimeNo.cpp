#include<iostream>
#include<conio.h>

int main()
{
	int flag=0,i,no;
	std::cout<<"\n Program to check the given number is prime or not";
	std::cout<<"\n Enter a Number: ";
	std::cin>>no;
	
	for(i=2;i<no/2;i++)
	{
		if(no%i == 0)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag==1)
	{
		std::cout<<no;std::cout<<"is a composite Number...";
	}
	else
	{
		std::cout<<no;std::cout<<"is an prime Number...";
		
	}
	return 0;
	
}

