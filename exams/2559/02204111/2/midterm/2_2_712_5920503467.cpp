//5920503467 Niti Atsiri
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,y,x,i=0,sum=0;
	cout<<"Enter an integer: ";
	cin>>a;
	c=a;
	x=a;
	do
	{
		x=x/10;
		i++;
	}
	while(x>0);
	y=i;
	while(a>0)
	{
		b=a/(int)pow(10,y-1);
		sum=sum+pow(b,i);
		a=a%(int)pow(10,y-1);
		y--;
	}
	cout<<endl;
	cout<<"Number of digit is "<<i<<endl;
	if(sum==c)
	cout<<c<<" is a target number."<<endl;
	else
	cout<<c<<" is not a target number."<<endl;
	system("pause");
	return 0;
}
