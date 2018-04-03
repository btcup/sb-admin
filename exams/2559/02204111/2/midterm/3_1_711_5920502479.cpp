//5920502479 Patcharapron soponpong
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float arrival,leave,sum1;
	int hours,minutes,pay,sum,hours1;
	cout<<"Arrival time :";
	cin>>arrival;
	cout<<"Leave time :";
	cin>>leave;
	sum1=(leave-arrival);
	sum=(sum1*100);
	minutes=ceil(sum%100);
	hours=int(sum1);
	
	if(hours<=3)
	{
		
		cout<<hours<<" hours and  "<<minutes<<" minutes"<<endl;
		pay=0;
		cout<<"You have to pay "<<pay<<"bath";
	}
	else if(hours>=4||(hours<=6))
	{
		cout<<hours<<" hours and  "<<minutes<<" minutes"<<endl;
		if(minutes>=15)
		pay=((hours-3)+1)*20;
		else if(minutes<15)
		pay=(hours-3)*20;
	    cout<<"You have to pay "<<pay<<"bath";
	
	}
	else if((hours>=7)||(hours<=8))
	{
		cout<<hours<<" hours and  "<<minutes<<" minutes"<<endl;
		
		if(minutes>=15)
		pay=(60+(((hours-6)+1)*50));
		else if(minutes<15)
		pay=(60+((hours-6)*50));
	    cout<<"You have to pay "<<pay<<"bath";
	    
	}
	else if(hours>8) 
	{
		cout<<hours<<" hours and  "<<minutes<<" minutes"<<endl;
		pay=500;
	    cout<<"You have to pay "<<pay<<"bath";
		
	}
	system ("pause");
	return 0;
}   
	
