//5920503157 Bandit Kaeophaluek
#include<iostream>
using namespace std;
int main()
{
	char x;
	int f;
	float a,b,c,d,e;
	e=0;
	cout<<"Type of vehicle ((C) Car or (M) Motorcycle): ";
	cin>>x;
	cout<<"Arrival time : ";
	cin>>a;
	cout<<"Leave time : ";
	cin>>b;
	cout<<endl;
	c=((int(b)*60)+(b*100)-int(b)*100)-((int(a)*60)+(a*100)-int(a)*100);
	d=((c-(int(c)%60))/60);
	f=(int(c)%60);
	if(c>0)
	cout<<d<<" hours and "<<f<<" minutes"<<endl;
	if(x=='C')
	{	
		if(c>480)
		{
		e=500;
		}
		else if (c<=480&&c>120)
		{
			if(c>=180&&c<=300)
			e=(c*30);
			if(c>=360&&c<=480)
			e=(c*50)-(90);
		}
		else
		e=0;
	}
	else if(x=='M')
	{	
		if(c>420)
		{
		e=150;
		}
		else if (c<=420&&c>180)
		{
			e=d*10;
		} 
		
		else 
		e=0;
	}
		if(c>0)
		cout<<"You have to pay "<<e<<" bath"<<endl;
		else
		cout<<"You can't leave before arrival time"<<endl;
	
	return 0;
}
