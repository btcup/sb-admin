//5920500999 Khwanklao Baibua
#include <iostream>
using namespace std;
int main()
{
	double Arrival,Leave,sum,Hour,Minit,time;
	cout<<"Arrival time :";
	cin>>Arrival;
	cout<<"Leave time :";
	cin>>Leave;
	Arrival=60*Arrival;
	Leave=60*Leave;
	sum=Leave-Arrival;
	Hour=int(sum)/60;
	Minit=int(sum)%60;
	if(Arrival<Leave)
	{
	
	if(Hour<=3)
	{
		cout<<Hour<<" hours and "<<Minit<<" minutes"<<endl;
	cout<<"You have to pay "<<0<<" bath"<<endl;
		
	}
	else if(Hour<=6)
	{
	
		cout<<Hour<<" hours and "<<Minit<<" minutes"<<endl;
		time=Hour*20;
	cout<<"You have to pay "<<time<<" bath"<<endl;
			
	}
		else if(Hour<=8)
	{
	
		cout<<Hour<<" hours and "<<Minit<<" minutes"<<endl;
		time=Hour*50;
	cout<<"You have to pay "<<time<<" bath"<<endl;
			
	}
		else if(Hour>8)
	{
	
		cout<<Hour<<" hours and "<<Minit<<" minutes"<<endl;
	cout<<"You have to pay 500 bath"<<endl;
			
	}
}
	else
	cout<<"You can't leave before arrival time"<<endl;
	
		
	
	system ("pause");
	return 0;
}
