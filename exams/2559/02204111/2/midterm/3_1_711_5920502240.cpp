#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	double arrival,leave,x,y;
	int pay,time;
	cout<<"Arrival time:";
	cin>>arrival;
	cout<<"Leave time:";
	cin>>leave;
	time=leave-arrival;
	cout<<time<<"hours"<<" "<<"and"<<time<<"minutes"<<endl;
	if(time>0)
	{
		
		if(time==3)
		{
			pay=0;
		}
		else if(time<=6)
		{
			pay=time*20;
		}
		else if(time<=8)
		{
			pay=time*50;
		}
		else if(time>8)
		{
			pay=500;
		}
	
		cout<<"You have to pay"<<pay<<"Bath"<<endl;}
	else
		cout<<"You can,t leave before arrival time"<<endl;
	
	
	


	
	system("pause");
	return 0;
}
