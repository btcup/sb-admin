#include <iostream> //5620550541 nanthakorn klinjan
using namespace std;
int main()
{
	int n,i=1;
	float a,d,sum=0;
	cout<<"Enter n,a and d:";
	cin>>n>>a>>d;
	while(n<=0)
	{
		cout<<"n cannot be both a negative integer and zero"<<endl;
		cout<<"Enter n,a and d:";
		cin>>n>>a>>d;
	}
	while(a==0)
	{
		cout<<"a cannot be a zero"<<endl;
	    cout<<"Enter n,a and d:";
	    cin>>n>>a>>d;
	}
	while(d==0)
	{
		cout<<"d cannot be a zero"<<endl;
	    cout<<"Enter n,a and d:";
	    cin>>n>>a>>d;
	}
	cout<<"The arithemetic progression of n="<<n<<","<<"a="<<a<<","<<"d="<<d<<";"<<endl;
	while(i<=n)
	{   if(i==n)
		{
			cout<<a<<endl;
			sum=sum+a;
			break;
		}
		cout<<a<<" ";
		sum=sum+a;
		a=a+d;
		i=i+1;
	}
	cout<<"The summation :"<<sum;
	system("pause");
	return 0;
}
