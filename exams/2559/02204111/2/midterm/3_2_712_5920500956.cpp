//5920500956 Anucha Chawmuangkhwan
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	float x;
	do
	{
		cout<<"Enter electricity cost per unit (baths) : ";
		cin>>x;
	}
	while(x<=0);
	do
	{
		cout<<"Enter last unit : ";
		cin>>a;
		cout<<"Enter current unit : ";
		cin>>b;
		cout<<"unit used = "<<(b-a)<<endl;
		cout<<"Electricity charge (bath) = "<<(b-a)*x<<endl;
	}
	while(b>a);
	
	system("pause");
	return 0;
}
