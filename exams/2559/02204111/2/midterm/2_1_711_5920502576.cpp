//5920502576 Sunitra Rakkanrob

#include <iostream>
using namespace std;
int main ()
{
    char m ;
	float const d=0.25;
	int y,s;
	float f,a,z;
	cout<<"Enter car model: ";
	cin>>m;
	cout<<"Enter number of years (1-6): ";
	cin>>y;
	cout<<"Enter your salary: ";
	cin>>s;
	if(m=='A')
	{
		f=(1385000-(d*1385000));
		a=(f*y*(2.09/100));
		z=(f+a)/(y*12);
		cout<<"Financing amount: "<<f<<endl;
		cout<<"Amount of interest: "<<a<<endl;
		cout<<"Monthly payment: "<<z<<endl;
		if(z>(s/2))
		{
			cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
		}
		else
		{
			cout<<"Good decision,Enjoy your new car"<<endl;
		}
	}
	else if(m=='B')
	{
		f=(511500-(d*511500));
		a=(f*y*(1.79/100));
		z=(f+a)/(y*12);
		cout<<"Financing amount: "<<f<<endl;
		cout<<"Amount of interest: "<<a<<endl;
		cout<<"Monthly payment: "<<z<<endl;
		if(z>(s/2))
		{
			cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
		}
		else
		{
			cout<<"Good decision,Enjoy your new car"<<endl;
		}
	}
	else if (m=='C')
	{
		f=(738000-(d*738000));
		a=(f*y*(1.99/100));
		z=(f+a)/(y*12);
		cout<<"Financing amount: "<<f<<endl;
		cout<<"Amount of interest: "<<a<<endl;
		cout<<"Monthly payment: "<<z<<endl;
		if(z>(s/2))
		{
			cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
		}
	    else
		{
			cout<<"Good decision,Enjoy your new car"<<endl;
		}
	}
	else if (m=='J')
	{
		f=(694000-(d*694000));
		a=(f*y*(1.99/100));
		z=(f+a)/(y*12);
		cout<<"Financing amount: "<<f<<endl;
		cout<<"Amount of interest: "<<a<<endl;
		cout<<"Monthly payment: "<<z<<endl;
		if(z>(s/2))
		{
			cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
		}
		else
		{
			cout<<"Good decision,Enjoy your new car"<<endl;
		}
	}
system ("pause");
return 0;		
}



