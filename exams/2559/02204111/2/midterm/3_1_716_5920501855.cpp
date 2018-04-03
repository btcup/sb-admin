//5920501855 Chotmanee Srisomboon
#include<iostream>
using namespace std;
int main()
{
	float x,y;
	int n,m,pay; 
	cout<<"Aririval time:";
	cin>>x;
	cout<<"Leave time:";
	cin>>y;
	cout<<int(y-x)<<" houts and "<<int(y-x)-(y-x)<<" minutes "<<endl;
	if(y-x==3)
	{
		(y-x)*0;
	}
	cout<<"You have to pay "<<(y-x)*0<<" bath "<<endl;
	if(y-x>=6)
	{
		(y-x)*20;
	}
	cout<<"You have to pay "<<(y-x)*20<<" bath "<<endl;
	if(y-x>=8)
	{
		(y-x)*50;
	}
	cout<<"You have to pay "<<(y-x)*50<<" bath "<<endl;
	if(y-x>8)
	{
		(y-x)*500;
	}
	cout<<"You have to pay "<<(y-x)*500<<" bath "<<endl;
    system("pause");
	return 0;
}
