//5920550155 Jirayut Nithinon
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int c,h,i,d;
	float a,b;
	char name;
	cout<<"Type of vehicle((C)Car or (M)Mortorcycle: ";
	cin>>name;
	cout<<"Arrival time :";
	cin>>a;
	cout<<"Leave time : ";
	cin>>b;
	h=b-a;
	c=(round( b))-(round (a));
	d=((float)b)-((float)a);
	
	if(name=='C')
	{
		if(h>0&&h<=2)
		{
		cout<<c<<" hours and"<<d<<" minutes"<<endl;
			
			i=h*0;
			cout<<"You have to pay "<<i<<"bath"<<endl;   
		}
		else if(h>=3&&h<=5)
		{
			i=h*30;
			cout<<c<<"hours and"<<d<<" minutes"<<endl;
			cout<<"You have to pay "<<i<<"bath"<<endl;
		}
		else if(h>=6&&h<=8)
		{
			i=h*50;
			cout<<c<<"hours and"<<d<<" minutes"<<endl;
			cout<<"You have to pay "<<i<<"bath"<<endl;
		}
		else if(h>=8&&h<=15)
		{
			i=500;
			cout<<c<<"hours and"<<d<<" minutes"<<endl;
			cout<<"You have to pay "<<i<<"bath"<<endl;
		}
		else if(h<0)
		{
			cout<<"You can't leave before arrival time"<<endl;
		}
		
	}	
		else if(name=='M')
	{
		if(h>0&&h<=3)
		{
			i=h*0;
			cout<<c<<"hours and"<<d<<" minutes"<<endl;
			cout<<"You have to pay "<<i<<"bath"<<endl;   
		}
		else if(h>=4&&h<=7)
		{
			i=h*10;
			cout<<c<< "hours and"<<d<<" minutes"<<endl;
			cout<<"You have to pay "<<i<<"bath"<<endl;
		}
		else if(h>=8)
		{
			i=150;
			cout<<c<<"hours and"<<d<<" minutes"<<endl;
			cout<<"You have to pay "<<i<<"bath"<<endl;
		}
	
		else if(h<0)
		{
			cout<<"You can't leave before arrival time"<<endl;
		}
		
	}	
	 
	
	system("pause");
	return 0;
	
}
