//5920501031 Chalisa Namakorn
#include<iostream>
using namespace std;
int main()
{
	char model;
	double d,y,r,n,f,a,m;
	cout<<"-------Car lease calculator-----------"<<endl;
	cout<<"Enter car model: ";
	cin>>model;

	cout<<"Enter number of years(1-6): ";
	cin>>y;
	if(y<=6)
{
cout<<"Enter percentage o down payment: ";
    cin>>d;
	cout<<"------------------------------------"<<endl;
	
	
	
		if(model=='A')
	{
	 r=1385000;
	 n=2.09*r;
	}
	else if(model=='B')
	{
		r=511500;
		n=1.79*r;
	}
		else if(model=='C')
	{
		r=738000;
		n=1.99*r;
	}
		else if(model=='J')
	{
		r=694000;
		n=1.99*r;
	}
	f=r-(r*(d/100));
	cout<<"Financing amount: "<<f<<endl;
	
   
	if(y<=4)
	{
		if(model=='A')
	   {
	    r=1385000;
	    n=(2.09/100)*r;
	   
	   }
	   else if(model=='B')
	    {
		r=511500;
		n=(1.79/100)*r;
     
	   }
		else if(model=='C')
	  {
		r=738000;
		n=1.99/100*r;
	
	  }
		else if(model=='J')
	   {
		r=694000;
		n=1.99/100*r;
	
	   }
	   a=((n-0.1)/100)*y*f;	
	  
	}
	else if(y<=6)
	  if(model=='A')
      	{
	      r=1385000;
	      n=(2.09/100)*r;
		a=f*y*n;
     	}
     	else if(model=='B')
    	{
    		r=511500;
	    	n=1.79/100*r;
	    	a=f*y*n;
	   }
		else if(model=='C')
	   {
		r=738000;
		n=1.99/100*r;
	    a=f*y*n;
	  }
		else if(model=='J')
     	{
		r =694000;
		n =1.99/100*r;
			a=f*y*n;
	    }
	else
	    cout<<"Error!,number of years is not in range"<<endl;
		
	cout<<"Amount of interest: "<<a<<endl;
		
}	
else
cout<<"Error!,number of years is not in range"<<endl;
    

m=(f*y)+(a*y);
cout<<"Monthly payment: "<<m<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
	
}
