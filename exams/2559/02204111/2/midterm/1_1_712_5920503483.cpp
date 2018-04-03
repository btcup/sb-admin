// Mr.Panithan Padthomfang 5920503483
#include<iostream>
using namespace std;
int main()
{
	char car;
	int x,y,z,a,b;
	cout<<"-----Car lease calculator-----\n";
	cout<<"Enter car model :";
		cin>>car;
		cout<<"Enter number of years (1-6) :";
		cin>>x;
		if(x>=1&&x<=6)
		{
		cout<<"Enter percentage of down payment :";
		cin>>y;
		cout<<"---------------------------\n";
		if(car=='C')
		{
		z=738000-(738000*y/100);
		a=z*1.99*x;
		b=(z+a)/x*12.0;
		cout<<"Financing amount :"<<z<<endl;
		cout<<"Amount of interest :"<<a<<endl;
		cout<<"Monthly payment :"<<b<<endl;
		}
		if(car=='A')
		{
		z=1385000.0-(1385000.0*y/100);
		a=z*2.09*x;
		b=(z+a)/x*12.0;
		cout<<"Financing amount :"<<z<<endl;
		cout<<"Amount of interest :"<<a<<endl;
		cout<<"Monthly payment :"<<b<<endl;
		}
		if(car=='B')
		{
		z=511500-(511500*y/100);
		a=z*1.79*x;
		b=(z+a)/x*12.0;
		cout<<"Financing amount :"<<z<<endl;
		cout<<"Amount of interest :"<<a<<endl;
		cout<<"Monthly payment :"<<b<<endl;
		}
		if(car=='J')
		{
		z=694000-(694000*y/100);
		a=z*1.99*x;
		b=(z+a)/x*12.0;
		cout<<"Financing amount :"<<z<<endl;
		cout<<"Amount of interest :"<<a<<endl;
		cout<<"Monthly payment :"<<b<<endl;
	}
	}
		else
		cout<<"Error! number of years is not in range\n";
	system("pause");
		
	return 0;	
}
