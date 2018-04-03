// 5920500875 Suphakarn Luangrangsi	
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int e,x,min,max,n,i,s;
	n=0; i=1;
	int  a=1,b=2,c=3,d=4;
	while (n<4)
	{
		if(i==1)
		{i++;
		cout<<"Enter "<<a<<"st number : ";cin>>x;
		 
		
		}
		else if (i==2)
		{i++;
		cout<<"Enter "<<b<<"nd number : ";cin>>x;
		}
		else if (i==3)
		{i++;
		cout<<"Enter "<<c<<"rd number : ";cin>>x;
		}
		else if (i==4)
		{i++;
		cout<<"Enter "<<d<<"th number : ";cin>>x;
		}
		if(n==0)
		{
			min=x; 
			max=x; 
			
		}
		if(min>x)
	    {
	    min=x;
	     if(a==1)
	     min=e;
	     else if(b==2)
	     min=e;
	     else if(c==3)
	     min=e;
	     else if(d==4)
	     min=e;
	    }
	    else if (max<x)
		max=x;
		
		n++;
	}		
	
		
		
cout<<"The Differrence between Min. and Max. is "<<abs(max-min)<<endl;	



return 0;	
}

