//5920501600 Pawanrat Chokchaimadon
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int n,i;
	double a,r,x,sum;
	do
	{
			cout<<"Enter n, a and r : ";
		cin>>n>>a>>r;
		if(n>0&&a!=0&&r!=0)
		{
			cout<<"The geometric of n="<<n<<", a="<<a<<", r="<<r<<": " <<endl;
			for(i=0,sum=0;i<n;i++)
			{
				x=a*pow(r,i);
				cout<<x<<" ";
				sum=sum+x;
			}	
			cout<<endl;
			cout<<"The summation : "<<(sum)<<endl;
		}
		else
			cout<<"n cannot be both a negative integer and a zero "<<endl;
	}while(1);
	return 0;
}
