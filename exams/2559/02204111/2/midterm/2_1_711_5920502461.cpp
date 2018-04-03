//5920502461 Potsawat Ubonsai
#include<iostream>
using namespace std;
int main()
{
	const int payment = 25;
	char gen;
	const char A=1385000,B=511500,C=73800,J=69400;
	float a,b,c,d,y,x;
	int money,year,salary;
	float a1=2.09,a2=1.79,a3=1.99,a4=1.99;
	y=year*12;
	cout<<"------- Car lease Calculator-------"<<endl;
	cout<<"Enter car modle : ";
	cin>>gen;
	cout<<"Enter number of years (1-6) : ";
	cin>>year;
	cout<<"Enter your salary : ";
	cin>>salary;
	cout<<"-------------------------------------"<<endl;
	x=(payment/100)*A;
	if(gen==A)
	
	
		a=A-x;
		cout<<"Financing amout: "<<a<<""<<endl;
		b=a*a1*year;
		cout<<"Amount of interest :"<<b<<""<<endl;
		c=(a+b)/y;
		cout<<"Monthly payment: "<<c<<""<<endl;
		c<=salary/2;
		cout<<"Gooà";
	
	system("pause");
	
	return 0;
}
	

