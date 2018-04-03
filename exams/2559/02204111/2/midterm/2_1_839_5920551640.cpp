//5920551640 Sanyapong Chaisittisinsuk
#include<iostream> 
using namespace std;
int main()
{
	float a,b,c,d,e,x,y;
	char ch;
	cout<<"-------- Car lease calculator ------------"<<endl;
	cout<<"Enter car model:";
	cin>>ch;
	cout<<"Enter number of year (1-6):";
	cin>>a;
	cout<<"Enter your salary:";
	cin>>b;
	cout<<"------------------------------------------"<<endl;
	if(ch=='A')
	{
	x=1385000;
	y=0.0209;
	}
	else if(ch=='B')
	{
	x=511500;
	y=0.0179;
	}
	else if(ch=='C')
	{
	x=738000;
	y=0.0199;
	}
	else
	{
	x=694000;
	y=0.0199;	
	}
	c=x-(x*0.25);
	d=c*y*a;
	e=(c+d)/(a*12);
	cout<<"Financing amount:"<<c<<endl;
	cout<<"Amount of interest:"<<d<<endl;
	cout<<"Monthly payment:"<<e<<endl;
	if(e>b/2)
	cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
	else
	cout<<"Good decision,Enjoy your new car"<<endl;
	system("pause");
	return 0;
}
