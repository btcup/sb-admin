//5920501197 pawat srisiriwat
#include <iostream>
using namespace std;
int main()
{
	cout<<"-------------------- Car lease calculator -----------------------"<<endl;
	char model;
	int year,next=1;
	double d, down ,a,m;
	long f,c;	
	cout<<"Enter car model : ";
	cin >> model;
	cout<<"Enter number of years (1-6) : ";
	cin >> year;
    if (year<0||year>6)
    {
    cout<<"Error!,number of years is not in range"<<endl;
	next = 0;}
    if (next == 1)
    {
	cout <<"Enter percentage of down payment : ";
	cin >> down;
	cout <<"-----------------------------------------------------------------"<<endl;
	if (model == 'A')
	{
	c = 1385000;
	d = 2.09/100;}
	else if (model == 'B')
	{
	c = 511500;
	d = 1.79/100;}
	else if (model=='C')
	{
	c = 738000;
	d = 1.99/100;}
	else if (model =='J')
	{
	c = 694000;
	d = 1.99/100;}
	if (year<4)
	d = d-(0.1/100);	
	f = c-(c*(down/100));
	cout <<"Financing amount : "<<f<<endl;
	a = f*d*year;
	cout << "Amount of interst : "<<a<<endl;
	m = (f+a)/(year*12);
	cout <<"Montly payment : "<<m<<endl;}
system("pause");
return 0;
}

