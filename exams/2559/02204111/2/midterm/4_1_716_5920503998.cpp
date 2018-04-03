//5920503998 Nonnarat Manchuen
#include <iostream>
using namespace std;
int main()
{
	char vehicle;
	double x,y,z,a;
	cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
	cin>>vehicle;
	cout<<"Arrival time : ";
	cin>>x;
	cout<<"Leave time: ";
	cin>>y;
	if(vehicle=='C')
	{
	if(y-x>=0&&y-x<=2)
	{
		z=int(y-x);
		cout<<z<<"hours and"<<"minutes"<<endl;
		cout<<"You have to pay 0 bath"<<endl;
	}
	else if(y-x>=3&&y-x<=5)
	{
		z=int(y-x-2);
		a=z*30;
		cout<<z<<"hours and minutes"<<endl;
		cout<<"You have to pay"<<a<<" bath"<<endl;
	}
	else if(y-x>=6&&y-x<=8)
	{
		z=int(y-x-2);
		a=z*50;
		cout<<z<<"hours and minutes"<<endl;
		cout<<"You have to pay"<<a<<" bath"<<endl;
	}
	else if(y-z>=9)
	{
		z=int(y-x);
		cout<<z<<"hours and minutes"<<endl;
		cout<<"You have to pay 500 bath"<<endl;
	}
	else 
		cout<<"You can't leave before arrival time"<<endl;
	
	}
	if(vehicle=='M')
		{
			if(y-x>=0&&y-x<=3)
			{
				z=int(y-x);
			cout<<z<<"hours and minutes"<<endl;
			cout<<"You have to pay 0 bath"<<endl;
			}
			else if(y-x>=4&&y-x<=7)
			{
				z=int(y-x-3);
				a=z*10;
			cout<<z<<"hours and minutes"<<endl;
			cout<<"You have to pay "<<a<<" bath"<<endl;
			}
			else if(y-x>7)
			{
				z=int(y-x);
			cout<<z<<"hours and minutes"<<endl;
			cout<<"You have to pay 150 bath"<<endl;
			}
			else 
			cout<<"You can't leave before arrival time"<<endl;
			
			
		}
	system("pause");
	return 0;
} 
