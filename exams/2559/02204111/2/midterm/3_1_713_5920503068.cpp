//5920503068 Chanutnitip Eaktanintorn
#include<iostream>
using namespace std;
int main()
{
	float a,b,d;
	int x,i,f;
	
	cout<<"Arrival time: ";
	cin>>a;
	cout<<"Leave time: ";
	cin>>b;
	d=b-a;
	
	cout<<d<<"hours"<<endl;// and "<<y<<"minutes"<<endl;
	
	if(d>=3.00&&d<3.15)
	{
		
		cout<<"you have to pay 0 bath"<<endl;
	}
	
	else if(d>=3.15&&d<4.15)
	{
		
		cout<<"you have to pay 20 bath"<<endl;
	}
	else if(d>=4.15&&d<5.15)
	{
		cout<<"you have to pay 40 bath"<<endl;
		
	}	
	else if(d>=5.15&&d<6.15)
	{
		cout<<"you have to pay 60 bath"<<endl;
	}
	else if(d>=6.15&&d<7.15)
	{
		cout<<"you have to pay 110 bath"<<endl;
	}
	else if(d>=7.15&&d<8.15)
	{
		cout<<"you have to pay 160 bath"<<endl;
	}
	else if(d>=8.15)
	{
		cout<<"you have to pay 500 bath"<<endl;
	}
	else
	cout<<"you can't leave before arrival time"<<endl;
	
	system("pause");
	return 0;
}
