//5920503637 jenjira sopha
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char A;
	double b,c,y,d;
	int x,a;
	cout<<"------- Car lease calculator --------"<<endl;
	cout<<"Enter car model:";
	cin>>A;
	cout<<"Enter number of years (1-6):";
	cin>>y;
	cout<<"Enter percentage of down payment:";
	cin>>x;
	cout<<"-----------------------------------------"<<endl;
	if(y<4)
	{
	
	if(A=='C')
	{
		a = 1385000-(1385000*x/100);
		cout<<"Financing amount:"<<a<<endl;
		b=((a*1.99)*y);
		cout<<"Amount of interest:"<<b<<endl;
		d=y*12;
		c=(a+b)/d;
		cout<<"Monnthly pament:"<<c<<endl;
		
	}
	if(A=='B')
	{
		a = 511500-((511500*x)/100);
		cout<<"Financing amount:"<<a<<endl;
		b=a*1.69*y;
		cout<<"Amount of interest:"<<b<<endl;
		c=(a+b)/(y*12);
		cout<<"Monnthly pament:"<<c<<endl;
	}
	if(A=='C')
	{
		a = 738000-((738000*x)/100);
		cout<<"Financing amount:"<<a<<endl;
		b=a*1.89*y;
		cout<<"Amount of interest:"<<b<<endl;
		d=y*12;
		c=(a+b)/d;
		cout<<"Monnthly pament:"<<c<<endl;
	}
	if(A=='J')
	{
		a = 694000-((694000*x)/100);
		cout<<"Financing amount:"<<a<<endl;
		b=a*1.89*y;
		cout<<"Amount of interest:"<<b<<endl;
		c=(a+b)/(y*12);
		cout<<"Monnthly pament:"<<c<<endl;
	}
}



	if(y>=4)
	{
		if(A=='C')
	{
		a = 138500-((1385000*x)/100);
		cout<<"Financing amount:"<<a<<endl;
		b=a*2.09*y;
		cout<<"Amount of interest:"<<b<<endl;
		c=(a+b)/(y*12);
		cout<<"Monnthly pament:"<<c<<endl;
		
	}
	if(A=='B')
	{
		a = 511500-((511500*x)/100);
		cout<<"Financing amount:"<<a<<endl;
		b=(a*1.79)*y;
		cout<<"Amount of interest:"<<b<<endl;
		d=y*12;
		c=(a+b)/d;
		cout<<"Monnthly pament:"<<c<<endl;
	}
	if(A=='C')
	{
		a = 738000-((738000*x)/100);
		cout<<"Financing amount:"<<a<<endl;
		b=a*1.99*y;
		cout<<"Amount of interest:"<<b<<endl;
		c=(a+b)/(y*12);
		cout<<"Monnthly pament:"<<c<<endl;
	}
	if(A=='J')
	{
		a = 694000-((694000*x)/100);
		cout<<"Financing amount:"<<a<<endl;
		b=a*1.99*y;
		cout<<"Amount of interest:"<<b<<endl;
		c=(a+b)/(y*12);
		cout<<"Monnthly pament:"<<c<<endl;
	}
	
	}
	system("pause");
	return 0;	
}
	
	
