//5920501600 Pawanrat Chokchaimadon
#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	char x,y;
	double landcost,buildcost,year,z1,z2,z3,w,t,tax;
		do
	{
		for(i=1,sum1=0;i<=10;i++)
			{
				z=(15/100)*i
				sum1=sum1+z
			}
		for(i=11)

		cout<<"Enter objective (Ultilization,Waste) : "; cin>>x;
		if (x=='U')
		{
			cout<<"Enter ultilization type (Bussiness, Agriculture ) : "; cin>>y;
			cout<<"Enter land cost (million) : "; cin>> landcost;
			cout<<"Enter buildig cost (million) : "; cin>> buildcost;
			cout<<"Building age "; cin>>year;
		
		
			z3=15+(landcost-(1.8*year)/100)+(landcost-(1.5*year)/100)
			if(year<=10)	
			{	z1=(landcost-(1.5*year)/100)
				if(y=='B'&&landcost<20)
				{
					t=landcost-(0.3/100)*landcost
					cout<<"your estate cost is "<<(z1+t)<< "("<<t<<"+"<<z1<<")"
				}
				else if(y=='B'&&landcost>=50)
				{
					t=landcost-(0.7/100)*landcost
					cout<<"your estate cost is "<<(z1+t)<< "("<<t<<"+"<<z1<<")"
				}
				else
					t=landcost-(0.5/100)*landcost
					cout<<"your estate cost is "<<(z1+t)<< "("<<t<<"+"<<z1<<")"
				
				
				if(y=='A'&&landcost<30)
				{
					
					cout<<"your estate cost is "<<(z1)<< "(0+"<<z1<<")"
				}
				else if(y=='A'&&landcost>=6060)
				{
					t=landcost-(0.06/100)*landcost
					cout<<"your estate cost is "<<(z1+t)<< "("<<t<<"+"<<z1<<")"
				}
				else
					t=landcost-(0.12/100)*landcost
					cout<<"your estate cost is "<<(z1+t)<< "("<<t<<"+"<<z1<<")"
			}
		
			if(year>=41)
		}
			
		else
		{
			cout<<"land cost (million) : "; cin>> landcost;
			cout<<"land age : "; cin>>year;
			if(year <= 3)
			cout<<"Your estate cost is "<<landcost<<endl;
			else if(year>=7)
			cout<<"Your estate cost is "<<(landcost-(landcost*1.2/100))<<endl;
			else
			cout<<"Your estate cost is "<<(landcost-(landcost*2.4/100))<<endl;
		}
	
		
	}while(1);
	return 0;
}
