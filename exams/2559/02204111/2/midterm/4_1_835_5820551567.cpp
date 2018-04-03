#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 	char v;
 	double a,l,t,p,h,m,o,n;
 	
 	cout<<"Type of vehicle ((C)Car or (M)Motorcrycle) : ";
 	cin>>v;
 	
 	cout<<"Arrival time : ";
 	cin>>a;
 	cout<<"Leave time : ";
 	cin>>l;
 	
 	n=(a-int(a))*100;
 	o=(l-int(l))*100;
 	if(l>a)
 	{
	 		if(n>30)
 			{
				n=60-n;
				if(o<=30)
				{
					m=n+o;
				}		
			}
			else 
			{
				m=o-n;
		
			}
	}
 	
	t=l-a;
 	h=ceil(t);
 	p=0;
 	
 	
 	cout<<int(t)<<" hours and "<<m<<" minutes.\n";
 	
 	if(v=='C'||v=='c')
 	{
		if(0<=h&&h<=2)
		{
			p=0;
			
		}
		else if(3<=h&&h<=5)
		{
			if(h==3)
			p=30;	
			else if(h==4)
			p=30*2;
			else
			p=30*3;
		}
		else if(6<=h&&h<=8)
		{
			if(h==6)
			p=90+50;	
			else if(h==7)
			p=90+100;
			else
			p=90+150;
		}
		else if(8<h)
		{
			p=500;	
		}
	}
	else if(v=='M'||v=='m')
	{
		if(0<=h&&h<=3)
		{
			p=h*0;
			
			
		}
		else if(4<=h&&h<=7)
		{
			h=h-3;
			p=h*10;
			
			
		}
		
		else if(7<h)
		{
			p=150;
			
			
		}
		
		
	}
 	cout<<"You have to pay "<<p<<endl;
 		 
		  
	system("pause");
	return 0;	  
}