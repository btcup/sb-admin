#include<iostream>
//apirat eua-aree 59205550287
using namespace std;
int main()
{
	int year,salary;
	float x,y,z;
	char A,B,C,J,model;
	cout<<"------- Car lease calculator -------------"<<endl;
	cout<<"Enter car model :";
	cin>>model;
	cout<<"Enter number of years (1-6) :";
	cin>>year;
	cout<<"Enter your salary :";
	cin>>salary;
	cout<<"------------------------------------------"<<endl;
	if(model=='A')
	{
		x=1385000-(1385000*0.25);
		y=x*(2.09/100)*year;
		z=(x+y)/(year*12);		
	}
	else if(model=='B')
	{
		x=511500-(511500*0.25);
		y=x*(1.79/100)*year;
		z=(x+y)/(year*12);		
	}
	else if(model=='C')
	{
		x=738000-(738000*0.25);
		y=x*(1.99/100)*year;
		z=(x+y)/(year*12);		
	}
	else if(model=='J')
	{
		x=694000-(694000*0.25);
		y=x*(1.99/100)*year;
		z=(x+y)/(year*12);		
	}
	cout<<"Firancing amount :"<<x<<endl;
	cout<<"Amount of interest :"<<y<<endl;
	cout<<"Monthy payment :"<<z<<endl;
	if(z>salary/2)
	{
	  cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
    }
    else if(z<=salary/2)
    {
    	cout<<"Good desicion,Enjoy your new car"<<endl;
	}
	system("pause");
	return 0;
}
