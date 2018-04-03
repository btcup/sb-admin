
//5920501278 supannika sentima
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char type;
	float arrival,leave,hour,pay;
	cout<<"Type of vehicle((c)car or (m)motocycle):";
	cin>>type;
	if(type=='c')
	{
		cout<<"Arrival time:";
		cin>>arrival;
	
		cout<<"leave time:";
		cin>>leave;
	
		cout<<hour;
		if(hour<=2)
			{
				cout<<"you have to pay 0 bath";
			}
		else if(hour>=3||hour<=5)
		{
			pay=hour*30;
			cout<<"you have to pay"<<pay<<"bath";
		}
		else if(hour>=6||hour<=8)
		{
			pay=hour*50;
			cout<<"you have to pay"<<pay<<"bath";
		}
		else if(hour>8)
		{
			pay=hour*500;
			cout<<"you have to pay"<<pay<<"bath";
		}
	}
	if(type=='m')
	{
		cout<<"Arrival time:";
		cin>>arrival;
	
		cout<<"leave time:";
		cin>>leave;
		if(hour<=3)
			{
				cout<<"you have to pay 0 bath";
			}
		else if(hour>=4||hour<=7)
		{
			pay=hour*10;
			cout<<"you have to pay"<<pay<<"bath";
		}
		else if(hour>7)
		{
			pay=hour*150;
			cout<<"you have to pay"<<pay<<"bath";
		}	
			
	}
	else
		{
			cout<<"you can't leave befor arrival time";
		}
			
	system("pause");
	return 0;
	
}
