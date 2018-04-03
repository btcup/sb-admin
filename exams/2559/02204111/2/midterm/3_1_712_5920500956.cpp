//5920500956 Anucha Chawmuangkhwan
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	float x,y,z;
	cout<<"Arrival time : ";
	cin>>x;
	cout<<"Leave time : ";
	cin>>y;
	if(x<=y)
	{
		a=(x*100);
		b=(a%100);
		c=(y*100);
		d=(c%100);
		if(d>b)
		{
			cout<<int(y-x)<<" hours and "<<(d-b)<<" minutes "<<endl;
			if((d-b)>=15)
			{
				e=int(y-x)+1;
				if(e>0&&e<=3)
				{
					cout<<"You have to pay 0 bath"<<endl;	
				}
				else if(e>=4&&e<=6)
				{
					cout<<"You have to pay "<<(e*20)<<" bath"<<endl;
				}
				else if(e>=7&&e<=8)
				{
					cout<<"You have to pay "<<(e*50)<<" bath"<<endl;
				}
				else if(e>8)
				{
					cout<<"You have to pay 500 bath"<<endl;
				}
			}
			else if(((d-b)<15))
			{
				e=int(y-x);
				if(e>0&&e<=3)
				{
					cout<<"You have to pay 0 bath"<<endl;	
				}
				else if(e>=4&&e<=6)
				{
					cout<<"You have to pay "<<(e*20)<<" bath"<<endl;
				}
				else if(e>=7&&e<=8)
				{
					cout<<"You have to pay "<<(e*50)<<" bath"<<endl;
				}
				else if(e>8)
				{
					cout<<"You have to pay 500 bath"<<endl;
				}
			}	
		}
		else if(d<b)
		{
		cout<<int(y-x)<<" hours and "<<-(d-b)<<" minutes "<<endl;
			if(-(d-b)>=15)
			{
				e=int(y-x)+1;
				if(e>0&&e<=3)
				{
					cout<<"You have to pay 0 bath"<<endl;	
				}
				else if(e>=4&&e<=6)
				{
					cout<<"You have to pay "<<(e*20)<<" bath"<<endl;
				}
				else if(e>=7&&e<=8)
				{
					cout<<"You have to pay "<<(e*50)<<" bath"<<endl;
				}
				else if(e>8)
				{
					cout<<"You have to pay 500 bath"<<endl;
				}
			}
			else if(-(d-b)<15)
			{
				e=int(y-x);
				if(e>0&&e<=3)
				{
					cout<<"You have to pay 0 bath"<<endl;	
				}
				else if(e>=4&&e<=6)
				{
					cout<<"You have to pay "<<(e*20)<<" bath"<<endl;
				}
				else if(e>=7&&e<=8)
				{
					cout<<"You have to pay "<<(e*50)<<" bath"<<endl;
				}
				else if(e>8)
				{
					cout<<"You have to pay 500 bath"<<endl;
				}
			}
		}
		else if(x>y)
		{
			cout<<"You can't leave before arrival time"<<endl;
		}
		
	}
	system("pause");
	return 0;
}
			
