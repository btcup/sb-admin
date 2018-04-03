//5920550937 andaman samwang
#include<iostream>
using namespace std;
int main()
{
	int w,x;
	float a,y;
	cout<<"Enter electricity cost unit (bahts) :";
	cin>>a;
	if(a>0)
{

	
	while(w>=0)
	{
	
	if(a>0)
	{
	
	cout<<endl;
	cout<<"Enter last unit :";
	cin>>w;
		if(w>=0)
		{
		cout<<"Enter current unit :";
		cin>>x;
			if ((x-w)>=0&&w>0&&x>0)
			{
				y=(x-w)*a;
			cout<<"Units used ="<<x-w<<endl;
			cout<<"Electricity charge (bahts)"<<y<<endl;
			cout<<endl;
			}
			else
			{
			cout<<"Invalid current unit!"<<endl;
			}
		}
		else
		{
		cout<<"--End of calculation--"<<endl;
		}
	}
	else
	{
		
		cout<<endl;
		cout<<"Enter last unit :";
		cin>>w;
			if(w>=0)
			{
			cout<<"Enter current unit :";
			cin>>x;
			
				if ((x-w)>=0)
			{
				y=(x-w)*a;
			cout<<"Units used ="<<x-w<<endl;
			cout<<"Electricity charge (bahts)"<<y<<endl;
			cout<<endl;
			}
			else
			{
			cout<<"Invalid current unit!"<<endl;
			}
			y=(x-w)*a;
			cout<<"Electricity charge (bahts)"<<y<<endl;
			cout<<endl;
			}
			else
			{
			cout<<"--End of calculation--"<<endl;
			}
	}

	}

	
	}
	else
	{
	cout<<"Enter electricity cost unit (bahts) :";
	cin>>a;
	cout<<"Enter electricity cost unit (bahts) :";
	cin>>a;	
	while(w>=0)
	{
	
	if(a>0)
	{
	
	cout<<endl;
	cout<<"Enter last unit :";
	cin>>w;
		if(w>=0)
		{
		cout<<"Enter current unit :";
		cin>>x;
			if ((x-w)>=0)
			{
				y=(x-w)*a;
			cout<<"Units used ="<<x-w<<endl;
			cout<<"Electricity charge (bahts)"<<y<<endl;
			cout<<endl;
			}
			else
			{
			cout<<"Invalid current unit!"<<endl;
			}
		}
		else
		{
		cout<<"--End of calculation--"<<endl;
		}
	}
	else
	{
		
		cout<<endl;
		cout<<"Enter last unit :";
		cin>>w;
			if(w>=0)
			{
			cout<<"Enter current unit :";
			cin>>x;
			
				if ((x-w)>=0)
			{
				y=(x-w)*a;
			cout<<"Units used ="<<x-w<<endl;
			cout<<"Electricity charge (bahts)"<<y<<endl;
			cout<<endl;
			}
			else
			{
			cout<<"Invalid current unit!"<<endl;
			}
			y=(x-w)*a;
			cout<<"Electricity charge (bahts)"<<y<<endl;
			cout<<endl;
			}
			else
			{
			cout<<"--End of calculation--"<<endl;
			}
	}

	}

		
	}

	cout<<endl;
	cout<<"Total of Electricity charge (bahts) ="<<y;
	system("pause");
	return 0;
}


