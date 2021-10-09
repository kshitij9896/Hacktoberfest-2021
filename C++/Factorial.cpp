#include<iostream>
#include<conio.h>

int main()
{
	double no;
	std::cout<<"\n\t\t\t\t\t Program To Find Factorial of a Number\n";

	while(1)
	{
	std::cout<<"\n\t\t\t\t\t Enter Any Number :";
	std::cin>>no;
	int i=1;
	int fact=1;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	std::cout<<"\n\t\t\t\t\t The Factorial of "<<  no << "is :"<<fact;
	
 }
 return 0;
 getche();
}

