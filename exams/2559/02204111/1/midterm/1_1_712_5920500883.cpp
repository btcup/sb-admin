#include<iostream>
using namespace std;
int main()
{
	
	int n;
	float a,d;
	cout<<"Enter n,a and d: ";
	cin>>n>>a>>d;
	
	if(n<=0)
	{
	cout<<"n cannont be both a negative integer and zero"<<endl;
	cout<<"Enter n,a and d: ";
	cin>>n>>a>>d;
	}
	if(a==0)
	{
		cout<<"a cannot be a zero"<<endl;
		cout<<"Enter n,a and d: ";
		cin>>n>>a>>d;	
	}
	if(d==0)
	{
		cout<<"d cannot be a zero"<<endl;
		cout<<"Enter n,a and d: ";
		cin>>n>>a>>d;	
	}
	if(a==0&&d==0)
	{
		cout<<"a and d cannot be a zeros"<<endl;
		cout<<"Enter n,a and d: ";
		cin>>n>>a>>d;	
	}
	if(n<=0&&a==0&&d==0)
	{
		cout<<"n cannont be both a negative integer and zero"<<endl;
		cout<<"Enter n,a and d: ";
		cin>>n>>a>>d;
		
	}
	
	system("pause");
	return 0;
}
//5920500883 Supachai Dentrirat
