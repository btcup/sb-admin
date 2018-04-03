//5920501871 Sopida Areekit
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c,d,e,f,x;
	char M,dow=25,m=1385000,n=511500,o=738000,p=694000;
	cout<<"------- Car lease calculatir -----------"<<endl;
	cout<<"Enter car modle : ";
	cin>>M;
	cout<<"Enter number of years (1-6) : ";
	cin>>d;
	cout<<"Enter your salary : ";
	cin>>a;
	if(M=='A'){
		a=a/2;
		x=100*(dow/m);
		b=1385000-x;
		c=b*2.09*d;
		f=d*12;
		e=(b+c)/f;	
		if(e>a)	{
		cout<<"Financing amount : "<<b<<endl;
		cout<<"Amount of interest : "<<c<<endl;
		cout<<"Financing amount : "<<e<<endl;
		cout<<"The monthly payment is over than % of your salary!!"<<endl;
		}
		else if(e<=a)
		cout<<"Good decision, Enjoy your new car"<<endl;
	}
	else if(M=='B'){
		a=a/2;
		x=100*(dow/n);
		b=511500-x;
		c=b*1.79*d;
		f=d*12;
		e=(b+c)/f;		
		if(e>a)	{
		cout<<"Financing amount : "<<b<<endl;
		cout<<"Amount of interest : "<<c<<endl;
		cout<<"Financing amount : "<<e<<endl;
		cout<<"The monthly payment is over than % of your salary!!"<<endl;
		}
		else if(e<=a)
		cout<<"Good decision, Enjoy your new car"<<endl;
	}
	else if(M=='C'){
		a=a/2;
		x=100*(dow/o);
		b=738000-x;
		c=b*1.99*d;
		f=d*12;
		e=(b+c)/f;		
		if(e>a)	{
		cout<<"Financing amount : "<<b<<endl;
		cout<<"Amount of interest : "<<c<<endl;
		cout<<"Financing amount : "<<e<<endl;
		cout<<"The monthly payment is over than % of your salary!!"<<endl;
		}
		else if(e<=a)
		cout<<"Good decision, Enjoy your new car"<<endl;
	}
	else if(M=='J'){
		a=a/2;
		x=100*(dow/p);
		b=694000-x;
		c=b*1.99*d;
		f=d*12;
		e=(b+c)/f;		
		if(e>a)	{
		cout<<"Financing amount : "<<b<<endl;
		cout<<"Amount of interest : "<<c<<endl;
		cout<<"Financing amount : "<<e<<endl;
		cout<<"The monthly payment is over than % of your salary!!"<<endl;
		}
		else if(e<=a)
		cout<<"Good decision, Enjoy your new car"<<endl;
	}
	system ("pause");
	return 0;
}
	
