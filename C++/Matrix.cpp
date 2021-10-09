#include<iostream>
#include<conio.h>


int main()
{
    int n,m[2][2];
    std::cout<<"Enter Size of Matrix";
    std::cin>>n;
    std::cout<< "Enter Array Elements:";
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		std::cin>>m[i][j];	
		}
    	
	}
	std::cout<<"The Matrix Elements Are:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			std::cout<<"";<<m[i][j];
		}
	}
	
}
