// Rachanon Roengkitpaisan 5920501669
#include <iostream>
using namespace std;
int main()
{
	double t1,t2,time,pay=0,hour,min;
	cout<<"Arrival time : "; cin>>t1;
	cout<<"Leave time : "; cin>>t2;
	time=t2-t1;
	hour=(int)time;
	double min1,min2;
	min1=int(t1*100)%100;
	min2=int(t2*100)%100;
	if (min2<min1)
	{
		min2=min2+60;
		min=min2-min1;
	}
	else
		min=min2-min1;
	if(min>=15)
	hour++;
	if (time<0)
	cout<<"You can't leave before arrival time"<<endl;
	else 
	{
		if (hour>=4&&hour<=6)
		pay+=(hour-3)*20;
		else if (hour>=7&&hour<=8)
		pay+=(hour-6)*50;
		else if (hour>8)
		pay=500;
		else
		pay=0;
	cout<<(int)time<<"hours and "<<min<<" minutes"<<endl;
	cout<<"You have to pay "<<pay<<" bath"<<endl;
	cout<<min1<<endl;
	}	
return 0;
}
