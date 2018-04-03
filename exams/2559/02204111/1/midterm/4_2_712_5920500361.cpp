// 5920500361 Thanathon  Prempranee
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,max,min;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	cout<<"Enter 3rd number : ";
	cin>>c;
	cout<<"Enter 4th number : ";
	cin>>d;
	
		if(a<b&&a<c&&a<d)
	{
		cout<<"1st number is minimum"<<endl;min=a;		
	}
		else if(b<a&&b<c&&b<d)
	{
		cout<<"2nd number is minimum"<<endl;min=b;		
	}
		else if(c<a&&c<b&&c<d)
	{
		cout<<"3rd number is minimum"<<endl;min=c;		
	}
		else if(d<a&&d<b&&d<c)
	{
		cout<<"4thd number is minimum"<<endl;min=d;
	}
		
		
		if(a>b&&a>c&&a>d)
	{		
		cout<<"1st number is maximum"<<endl;max=a;
	}
		else if(b>a&&b>c&&b>d)
	{
		cout<<"2nd number is maximum"<<endl;max=b;		
	}
		else if(c>b&&c>a&&c>d)
	{
		cout<<"3rd number is maximum"<<endl;max=c;		
	}
		else if(d>b&&d>c&&d>a)
	{
		cout<<"4thd number is maximum"<<endl;max=d;
	}
	cout<<"The difference betweenmin. and max. is "<<max-min<<endl;
	
		
		
		
	system("pause");
	return 0;
}
