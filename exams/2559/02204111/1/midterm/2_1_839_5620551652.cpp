#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
	float n,a,r,x,sum;
	sum=0;
	cout<<"Enter n , a and r :";
	cin>>n>>a>>r;
	cout<<"The geometric progression of n="<<n<<",a="<<a<<",r="<<r<<" :"<<endl;
	if(n<=0||a<=0||r<=0)
	{
		cout<<"n cannot br both a negative integer and zero";
	}
	cout<<"the summation :";
	for(i=1;i<=n;i++)
	{
		x=a*pow(r,2);
		sum=sum+x;
		cout<<sum;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
