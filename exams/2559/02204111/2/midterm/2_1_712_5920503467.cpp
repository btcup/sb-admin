//5920503467 Niti Atsiri
#include <iostream>
using namespace std;
int main()
{
	float x,y,z,b,c;
	char a;
	cout<<"------------Car lease calculator----------"<<endl;
	cout<<"Enter car model :";
	cin>>a;
	cout<<"Enter number  of years (1-6): ";
	cin>>b;
	cout<<"Enter your salary :";
	cin>>c;
	cout<<"------------------------------------------"<<endl;
	if(a=='A')
	{
		x=1385000-(1385000*25)/100;
		y=x*2.09/100*b;
		z=(x+y)/(12*b);
	
	}
	else if(a=='B')
	{
		x=511500-(511500*25)/100;
		y=x*1.79/100*b;
		z=(x+y)/(12*b);
	
	}
	else if(a=='C')
	{
		x=738000-(738000*25)/100;
		y=x*1.99/100*b;
		z=(x+y)/(12*b);
		
	}
	else 
	{
		x=694000-(694000*25)/100;
		y=x*1.99/100*b;
		z=(x+y)/(12*b);
	
	}
	cout<<"Financing amount :"<<x<<endl;
	cout<<"Amount of interest :"<<y<<endl;
	cout<<"Monthly payment:"<<z<<endl;
	if(z>c/2)
	cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
	if(z<=c/2)
	cout<<"Good decision,Enjoy your new car"<<endl;
system("pause");
return 0;
}
