//5920502371 Thanyalak Chinenthon
#include<iostream>
using namespace std;
int main()
{
	char model;
	double x,y,z,sum1,sum,year,down;
	cout<<"Enter car model : ";
	cin>>model;
	cout<<"Enter number of years (1-6) : ";
	cin>>year;
	cout<<"Enter percentage of down payment : ";
	cin>>down;
	if(year>=4&&year<6)
	{
	if(model=='A'||model=='B'||model=='C'||model=='D')
	{
		if(model=='A')
		{
			sum = 1385000*down/100;
			x = 1385000-sum;
			y = (x*year)*2.09;
			z = (x+y)/(year*12);
		}
		else if(model=='B')
		{
			sum = 511500*down/100;
			x = 511500-sum;
			y = x*1.79*year;
			z = (x+y)/(year*12);
		}
		else if(model=='C')
		{
			sum = 738000*down/100;
			x = 738000-sum;
			y = x*1.99*year;
			z = (x+y)/(year*12);
		}
		else if(model=='D')
		{
			sum = 694000*down/100;
			x = 694000-sum;
			y = x*1.99*year;
			z = (x+y)/(year*12);
		}
	}
	}
	else if(year<4)
	{
		if(model=='A'||model=='B'||model=='C'||model=='D')
	{
		if(model=='A')
		{
			sum = 1385000*down/100;
			x = 1385000-sum;
			y = (x*year)*(2.09-0.1);
			z = (x+y)/(year*12);
		}
		else if(model=='B')
		{
			sum = 511500*down/100;
			x = 511500-sum;
			y = x*1.79-0.1*year;
			z = (x+y)/(year*12);
		}
		else if(model=='C')
		{
			sum = 738000*down/100;
			x = 738000-sum;
			y = x*1.99-0.1*year;
			z = (x+y)/(year*12);
		}
		else if(model=='D')
		{
			sum = 694000*down/100;
			x = 694000-sum;
			y = x*1.99-0.1*year;
			z = (x+y)/(year*12);
		}
	}
	}
	else if(year>6)
		cout<<"Error!,number of years is not in range"<<endl;	
		
	cout<<"Financing amount : "<<x<<endl;
	cout<<"Amount of interest : "<<y<<endl;
	cout<<"Monthly payment : " <<z<<endl; 
	
	system("pause");
	return 0;
}
