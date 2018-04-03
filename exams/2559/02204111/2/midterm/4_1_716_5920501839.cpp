//5920501839 Premkiat Pantawong
#include<iostream>
using namespace std;
int main()
{
	char type;
	double timein,timeout,b;
	int a;
	cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
	cin>>type;
	cout<<"Arrival time: ";
	cin>>timein;
	cout<<"Leave time: ";
	cin>>timeout;
	if (type=='C')
	{
		if (timeout-timein<2)
		{
			a=timeout-timein;
			b=timeout-timein;
			cout<<a<<" hour to and "<<b<<" minutes"<<endl;
			cout<<"You have to pay 0 bath"<<endl;
		}
		else if (timeout-timein>2&&timeout-timein<5)
	    {
	    	a=timeout-timein;
			b=timeout-timein;
			cout<<a<<" hour to and "<<b<<" minutes"<<endl;
			cout<<"You have to pay "<<30*a<<" bath"<<endl;
	    }
	    else if (timeout-timein>6&&timeout-timein<8)
	    {
	    	a=timeout-timein;
			b=timeout-timein;
			cout<<a<<" hour to and "<<b<<" minutes"<<endl;
			cout<<"You have to pay "<<50*a<<" bath"<<endl;
	    }
	    else
	    {
	    	a=timeout-timein;
			b=timeout-timein;
			cout<<a<<" hour to and "<<b<<" minutes"<<endl;
			cout<<"You have to pay 500 bath"<<endl;
	    }
	}
	else 
	{
		if (timeout-timein<3)
		{
			a=timeout-timein;
			b=timeout-timein;
			cout<<a<<" hour to and "<<b<<" minutes"<<endl;
			cout<<"You have to pay 0 bath"<<endl;
		}
		else if (timeout-timein>4&&timeout-timein<7)
		{
			a=timeout-timein;
			b=timeout-timein;
			cout<<a<<" hour to and "<<b<<" minutes"<<endl;
			cout<<"You have to pay "<<10*a<<" bath"<<endl;
		}
		else
		{
			a=timeout-timein;
			b=timeout-timein;
			cout<<a<<" hour to and "<<b<<" minutes"<<endl;
			cout<<"You can't leave before arrival time";
		}
	}
	
	return 0;
	
}
