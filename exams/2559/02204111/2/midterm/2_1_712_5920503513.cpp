//5920503513 Panwadee Thaweerawong
#include<iostream>
using namespace std;
int main()
{
	float b,c,d,e,x,y;
	char a,A,B,C,J;
	cout<<"-------Car lease calculator-----------"<<endl;
	cout<<"Enter car model : ";
	cin>>a;
	cout<<"Enter number of years (1-6) : ";
	cin>>x;
	cout<<"Enter your salary : ";
	cin>>y;
	cout<<"----------------------------------"<<endl;
	if(a=='A'){
		b=1385000-(1385000*0.25);
		cout<<"Financing amount "<<b<<endl;
		c=(b*x)*2.09;
		cout<<"Amount of interest : "<<c<<endl;
		d=(b+c)/x;
		cout<<"Montly payment : "<<d<<endl;
			if(d>(y/2))
				cout<<"The montly payment is over than 50% of your salary!!";
			if(d<(y/2))
				cout<<"Good decision,Enjoy your new car";
	}
	if(a=='B'){
		b=511500-(511500*0.25);
		cout<<"Financing amount "<<b<<endl;
		c=(b*x*1.79);
		cout<<"Amount of interest : "<<c<<endl;
		d=((b+c)/x);
		cout<<"Montly payment : "<<d<<endl;
			if(d>(y/2))
				cout<<"The montly payment is over than 50% of your salary!!";
			if(d<(y/2)){
			
				cout<<"Good decision,Enjoy your new car";
				}
			}
	if(a=='C'){
		b=738000-(738000*0.25);
		cout<<"Financing amount "<<b<<endl;
		c=b*x*1.99;
		cout<<"Amount of interest : "<<c<<endl;
		d=((b+c)/x);
		cout<<"Montly payment : "<<d<<endl;}
			if(d>(y/2))
				cout<<"The montly payment is over than 50% of your salary!!";
			if(d<(y/2)){
		
				cout<<"Good decision,Enjoy your new car";	
				}
	if(a=='J'){
		b=694000-(694000*0.25);
		cout<<"Financing amount "<<b<<endl;
		c=(b*x)*1.99;
		cout<<"Amount of interest : "<<c<<endl;
		d=((b+c)/x);
		cout<<"Montly payment : "<<d<<endl;
			if(d>(y/2))
				cout<<"The montly payment is over than 50% of your salary!!";
			if(d<(y/2)){
		
				cout<<"Good decision,Enjoy your new car";
				}
		}
		
		
			
		
		
		
		
		system("pause");
		return 0;
		
}
