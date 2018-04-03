#include<iostream>
using namespace std;
int main()
{
	double land,build,age,rate1,rate2,cost,i=1,sum=0;
	char ob,type;
	cout<<"Enter objective (Utilization, Waste) : ";
	cin>>ob;
	if(ob=='U')
	{		
		cout<<"Enter Utilization type (Business,Agriculture) : ";
		cin>>type;
		cout<<"Enter land cost (million) : ";
		cin>>land;
		cout<<"Enter Building cost (million) : ";
		cin>>build;
		cout<<"build age : ";
		cin>>age;
		if(age>40)
		{
			rate2 = 70.8;
		}	
		else
		{
			while(i<=age)
			{
				if(i<=10)
				{
					sum = sum+1.5;
					i++;
				}
				else if(i<=40)
				{
					sum = sum+1.8;
					i++;
				}
			}
			rate2 = sum;
		}
		cost = land+(build-(build*rate2/100));
		cout<<"Your estate cost is "<<cost<<"("<<land<<"+"<<(build-(build*rate2/100))<<")"<<" million bath"<<endl;
		if(type=='B')
		{
			if(cost<20)
				rate1 = 0.3;
			else if(cost>=50)
				rate1 = 0.7;
			else
				rate1 = 0.5;
		}
		else if(type=='A')
		{
			if(cost<30)
				rate1 = 0;
			else if(cost>=60)
				rate1 = 0.12;
			else
				rate1 = 0.06;
		}
		if(rate1==0)
			cout<<"The land tax is exeption"<<endl;
		else
			cout<<"The land tax is "<<cost*rate1/100<<" million bath";
	}
	else if(ob=='W')
	{
		build = 0;
		cout<<"land cost (million) : ";
		cin>>land;
		cout<<"land age : ";
		cin>>age;
		if(age>0&&age<4)
			rate1 = 0;	
		else if(age>=7)
			rate1 = 2.4;
		else
			rate1 = 1.2;
		cost = land+(build-(build*rate1));
		cout<<"Your estate cost is "<<cost<<" million bath"<<endl;
		if(rate1==0)
			cout<<"The land tax is exeption"<<endl;
		else
			cout<<"The land tax is "<<cost*rate1/100<<" million bath";
	}
	return 0;
}
