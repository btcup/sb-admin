//5920500930 Sumintra Saetan
#include <iostream>
using namespace std;
int main()
{
	char car;
	double a,l,minutes;
	int pay,sum,hours;
	cout<<"Type of vehicle ((C)Car or (M)Motorcycle) :";
	cin>>car;
	cout<<"Arrival time :";
	cin>>a;
	cout<<"Leave time :";
	cin>>l;
	cout<<"                                               "<<endl;
	sum = l-a;                    
	hours = sum;
	minutes =(sum/60)*60;
	
	if (car=='C')
	{
		if (sum<=2 && sum>0)
		{
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			cout<<"You have to pay 0 bath"<<endl;
		}
		else if (sum>=3 && sum<=5)
		{
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			pay = sum*30;
			cout<<"You have to pay "<<pay<<" bath"<<endl;
		}
		else if (sum>=6 && sum<=8)
		{
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			pay = sum*50;
			cout<<"You have to pay "<<pay<<" bath"<<endl;
		}
		else if (sum>8)
		{
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			cout<<"You have to pay 500 bath"<<endl;
		}
		else if (sum<0)
		{
			cout<<"You can't leave before arrival time"<<endl;
		}
	}
	if (car=='M')
	{
		if (sum<=3 && sum>=0)
		{
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			cout<<"You have to pay 0 bath"<<endl;
		}
		else if (sum>=4 && sum<=7)
		{
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			pay =sum*10;
			cout<<"You have to pay "<<pay<<" bath"<<endl;
		}
		else if (sum>7)
		{
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			cout<<"You have to pay 150 bath"<<endl;
		}
	}
	else
	system ("pause");
	return 0;
	
}
