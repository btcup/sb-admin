//5920503220 Rattanavalee Jantree
#include<iostream>
using  namespace std;
int main()
{
	int y,d;
	char m;
	float a,f,p;
	cout<<"------- Car lease calculator -----------"<<endl;
	cout<<"Enter car model :";
	cin>>m;
	cout<<"Enter number of years (1-6):";
	cin>>y;
	if(y>6)
	cout<<"Error!, Number of years is not range"<<endl;
	if(y>=4)
	{
	switch(m)
	{
		case 'A' : f=1385000-((1385000/100)*d);
		a=f*(2.09/100)*y;
		p=(f+a)/(y*12);break;
		case 'B' : f=511500-((511500/100)*d);
		a=f*(1.79/100)*y;
		p=(f+a)/(y*12);break;
		case 'C' : f=738000-((738000/100)*d);
		a=f*(1.99/100)*y;
		p=(f+a)/(y*12);break;
		case 'D' : f=694000-((694000/100)*d);
		a=f*(1.99/100)*y;
		p=(f+a)/(y*12);	break;	
	}
    }
    else if(y<4)
    {
	switch(m)
	{
		case 'A' : 
		f=1385000-((1385000/100)*d);
		a=f*(1.99/100)*y;
		p=(f+a)/(y*12);break;
		case 'B' : f=511500-((511500/100)*d);
		a=f*(1.69/100)*y;
		p=(f+a)/(y*12);break;
		case 'C' : f=738000-((738000/100)*d);
		a=f*(1.89/100)*y;
		p=(f+a)/(y*12);break;
		case 'D' : f=694000-((694000/100)*d);
		a=f*(1.89/100)*y;
		p=(f+a)/(y*12);break;		
	}
    }
    cout<<"Enter percentage of down payment:";
	cin>>d;
	cout<<"----------------------------------------"<<endl;
    cout<<"Financing amount:"<<f<<endl;
    cout<<"Amout of interest:"<<a<<endl;
    cout<<"Monthly payment:"<<p<<endl;
	system ("pause");
	return 0;
}


