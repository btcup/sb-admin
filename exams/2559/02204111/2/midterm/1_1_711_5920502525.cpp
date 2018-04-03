//5920502525 Ms.Mitsinee Loeskiadtikul
#include <iostream>
using namespace std;
int main()
{
	char car;
	int down,years,pay;
	float x,y,z,d;
	cout<<"Enter car model : ";
	cin>>car;
	cout<<"Enter number of years (1-6) :";
	cin>>years;
	cout<<"Enter percentage of down payment : ";
	cin>>down;
	if(car=='A'||car=='B'||car=='c'||car=='J')
{
	if(car=='A')
	{
		if(years<=6)
		{	
			if(years<4)
			{
				pay=1385000;
				d=2.19/100;
				x=pay-(pay*down/100);
				y=(x*d*years);
				z=(x+y)/(years*12);
			}
			else
			{
				pay=1385000;
				d=2.09/100;
				x=pay-(pay*down/100);
				y=(x*d*years);
				z=(x+y)/(years*12);
			}
		}
		else
		{
			cout<<"Eror!, number of years is not in range";
		}
	}
	else if(car=='B')
	{
		if(years<=6)
		{	
			if(years<4)
			{
				pay=511500;
				d=1.89/100;
				x=pay-(pay*down/100);
				y=(x*d*years);
				z=(x+y)/(years*12);
			}
			else
			{
				pay=511500;
				d=1.79/100;
				x=pay-(pay*down/100);
				y=(x*d*years);
				z=(x+y)/(years*12);
			}
		}
		else
		{
			cout<<"Eror!, number of years is not in range";
		}
	}
	else if(car=='C')
	{
		if(years<=6)
		{	
			if(years<4)
			{
				pay=738000;
				d=2.09/100;
				x=pay-(pay*down/100);
				y=(x*d*years);
				z=(x+y)/(years*12);
			}
			else
			{
				pay=738000;
				d=1.99/100;
				x=pay-(pay*down/100);
				y=(x*d*years);
				z=(x+y)/(years*12);
			}
		}
		else
		{
			cout<<"Eror!, number of years is not in range";
		}
	}
	else if(car=='J')
	{
		if(years<=6)
		{	
			if(years<4)
			{
				pay=694000;
				d=2.09/100;
				x=pay-(pay*down/100);
				y=(x*d*years);
				z=(x+y)/(years*12);
			}
			else
			{
				pay=694000;
				d=1.99/100;
				x=pay-(pay*down/100);
				y=(x*d*years);
				z=(x+y)/(years*12);
			}
		}
		else
		{
			cout<<"Eror!, number of years is not in range";
		}
	}
}
	else
	{
		cout<<"Eror!, number of years is not in range";
	}
	cout<<"Financing amount : "<<x<<endl;
	cout<<"Amount of interest : "<<y<<endl;
	cout<<"Monthly payment : "<<z<<endl;
	system("pause");
	return 0;
}
