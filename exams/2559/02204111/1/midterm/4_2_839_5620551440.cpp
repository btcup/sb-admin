//5620551440  Pongsatorn Purataka
#include<iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	cout<<"Enter 1st number: ";
    cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<"Enter 3rd number: ";
	cin>>c;
	cout<<"Enter 4th number: ";
	cin>>d;
    
	  if(a<b)
	  {
	  	if(b<c)
	  	   {
	  	   	if(c<d)
	  	   	{
	  	   		cout<<"1st number minimum: "<<endl;
	  	   		cout<<"4st number maximum: "<<endl;
	  	   		cout<<"The difference between Min and Max is "<<d-a<<endl;
	  	   	}
	  	   }
	  }
	
	  else if(b<a)
	  {
	  	if(a<d)
	  	   {
	  	   	if(d<c)
	  	   	{
	  	   		cout<<"2nd number minimum: "<<endl;
	  	   		cout<<"3rd number maximum: "<<endl;
	  	   		cout<<"The difference between Min and Max is "<<c-b<<endl;
	  	   	}
	  	   }
	  }
	  else
	    {
	    	cout<<"error"<<endl;
	    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
