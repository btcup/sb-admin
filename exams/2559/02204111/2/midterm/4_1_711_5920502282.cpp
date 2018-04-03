//5920502282 Jirapat Sograi
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char type;
	float Arrival_time,Leave_time,Total_time,Total_minutesA,minutes_Arrival_time,minutes_Leave_time;
	float Total_hours,Total_minutes,Total_minutesL;
	int Pay,Pay_for_minutes,Pay_for_hours,Pay2;
	cout<<"Type of vehicle ((C)car or (M)Motorcycle) : ";
	cin>>type;
	if(type=='C')
	{
		cout<<"Arrival time : ";
		cin>>Arrival_time;
		if(Arrival_time>=0)
		{
		cout<<"Leave time :";
		cin>>Leave_time;
		Total_hours=floor(Leave_time-Arrival_time);
		Total_minutesA=((Arrival_time*100)/100)-int(Arrival_time);
	
		Total_minutesL=((Leave_time*100)/100)-int(Leave_time);
		
	
		
		Pay=Total_hours*0;
		}
		
		if((Total_hours>=3)||(Total_hours<=5))
		{
		Pay_for_hours=Total_hours*30;
		Pay_for_minutes=Total_minutes*30;
		Pay=Pay_for_hours+Pay_for_minutes;
		}
		cout<<Total_hours<<"hours and"<<Total_minutes<<"minutes"<<endl;
		cout<<"You have to pay "<<Pay<<"bath"<<endl;
		
	}
	
	
	
	
	
	
	
	else if(type=='M')
	{
	}
	system("pause");
	return 0;
	
}
