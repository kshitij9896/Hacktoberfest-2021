
#include<stdlib.h>
#include<iostream>
#include<stdlib.h>
#include<dos.h>

class Addition
	{
	
   public:
   	
  	int addition(int a,int b)
	{
		
		return a+b;
	}
	
	int subtraction(int a, int b)
	{
		//std::cout<<"Subtraction is"<<a-b;
		return a-b;
	}
	
	int multiplication(int a,int b)
	{
                    
		return a*b;
	}
	
	int division(int a,int b)
	{
	       	if (b == 0)
		{
			throw "Division by zero conditon";
		}
			
	
		return a/b;
		
	}

   
};

	int main()
	{
		Addition a;
		int n1,n2;
		int ch;
	
			
        std::cout<<"\n Program To Perform All Arithmatic Functions...\n";
		std::cout<<"\n Enter Any Two Numbers...\n ";
		std::cin>>n1>>n2;
		 	if(n1 && n2 == 0)
   			{	
	           throw "Can't Take Zero!";
			}
 
	    system("cls");
	
		
  while(ch!=0)
  	{
  	
       
  		std::cout<<"\n 1.Addition\n";
		std::cout<<"\n 2.Subtraction\n";
		std::cout<<"\n 3.Multiplication\n";
		std::cout<<"\n 4.Division\n";
		std::cout<<"\n 5.Exit\n";
		std::cout<<"\n Enter your choice\n";
		std::cin>>ch;
		

	  
 try{

			
  switch(ch)
  {
  	 			
  	
  	case 1:
  		    //std::cout<<"Addition As Follows";
  			a.addition(n1,n2);
  			std::cout<<"\n addition is "<<n1+n2 <<"\n";
		    break;
	
	case 2:
	        	    
  		   a.subtraction(n1,n2);
		   std::cout<<"\n Subtraction is "<<n1-n2;
		    break;
		
		
	case 3:
				a.multiplication(n1,n2);
	         	std::cout<<"\n Multiplication is "<<n1*n2;
	        	break;	 
  	
  	case 4:
 		           	
					 
   		       		a.division(n1,n2);
   		       	   std::cout<<"\n Division is "<<n1/n2;
   		       
   		       			break;

    case  5:
    	           exit(0);
     default:
     	       std::cout<<"\n Wrong Choice...\n ";
}
				
  }
  catch(...){
  	
						std::cout<<"\n Exception!!Division by Zero is not allowed...\n";
		      			 }
	
  
   
}
	    
		return 0;
		
	}
