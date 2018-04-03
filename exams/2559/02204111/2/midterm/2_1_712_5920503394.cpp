//5920503394 Nattapat Phaiboontnansan
#include<iostream>
using namespace std;
int main()
{
	double x,y,i,j,k,m,n,h,g;
	char s;
	cout<<"Enter car model :";
	cin>>s;
	cout<<"Enter number of years(1-6) :";
	cin>>x;
	cout<<"Enter your salary :";
	cin>>y;
	cout<<"--------------------------------------"<<endl;
	if(s == 'B')
	{
	m=511500;
	i=m-(m*25)/100;
	j=(i*1.79)/100*x;
	k=(i+j)/(x*12);
}
	else if(s == 'A')
	{
	n=1385000;
	i=n-(n*25)/100;
	j=(i*2.09)/100*x;
	k=(i+j)/(x*12);
}
	else if(s == 'C')
	{
	h=783000;
	i=h-(h*25)/100;
	j=(i*1.99)/100*x;
	k=(i+j)/(x*12);
}
	else if(s == 'J')
	{
	g=694000;
	i=g-(g*25)/100;
	j=(i*1.99)/100*x;
	k=(i+j)/(x*12);
}
	cout<<"Financing amount :"<<" "<<i<<endl;
	cout<<"Amount of interest :"<<" "<<j<<endl;
	cout<<"Monthly payment :"<<" "<<k<<endl;
	if(k>(y/2))
	{
	cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
	}
	else
	cout<<"Good decision, Enjoy your new car"<<endl;
	system("pause");
	return 0;
	
	}
