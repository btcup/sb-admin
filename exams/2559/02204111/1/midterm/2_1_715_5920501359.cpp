#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i=0;
	double a,r,sum=0,x;
	cout<<"Enter n ,a and r : ";
	cin>>n>>a>>r;
	do
	{
		cout<<"The geometic progression of n = "<<n<<", a = "<<a<<", r = "<<r<<endl;
		if(n<=0)
			cout<<"n cannot be both a negative integer and a zero"<<endl;
		if(a==0&&r==0)
			cout<<"a and r cannot be zero"<<endl;
		else if(a==0)
			cout<<"a cannot be zero"<<endl;
		else if(r==0)
			cout<<"r cannot be zero"<<endl;	
	}
	while(n<=0||a==0||r==0);
	cout<<sum<<endl;
	system("pause");
	return 0;
}
