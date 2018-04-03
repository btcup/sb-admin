//5920503297  Somyot  Mali
#include <iostream>
using namespace std;
int main ()
{
	double a,b,c,d,e;
	cout<<"Arrival Time :";
	cin>>a;
	cout<<"leave Time :";
	cin>>b;
	if(a>b)
	cout<<"You can't leave before arrival time "<<endl;
	else 
	{
	c=b-a;
	int x=c;
	d=(c-x)*100;
	if (d>=60)
	{
		x=x+1;
		d=d-60;
		if(d>=15)
        x=x+1;
    }
    
	if (x<4&&d<15)
    e=0;
    else 
    {
    		if(x>=8)
    		e=500;
    	e=0;
     while (x<8&&x>=7)
    	{
    	
    			e=e+50;
    			x=x-1;
    }
    
    	while (x<7&&x>=4)
    		{
    			e=e+20;
    			x=x-1;
    		}	
         
    		
    	}
    	
    
	cout<<int (c)<<" hours and "<<d<<" minutes "<<endl;
	cout<<" You have to pay "<<e<<" bath "<<endl;}
	system ("pause");
	return 0;
}
