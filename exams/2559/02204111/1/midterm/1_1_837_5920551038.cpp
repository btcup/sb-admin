#include <iostream>
using namespace std;
int main()
{
	int n;
	double a,d,x;
	cout<<"Enter n, a and d :";
	cin>>n>>a>>d;
	if(n>0&&a!=0&&d!=0)
	{
		x=(a+d+3.5);
		cout<<"The arithmetic progression of n ="<<n<<" , a ="<<a<<" , d="<<d<<" "<<endl;
		cout<<"The summation :"<<x<<endl;
	}
	else 
	cout<<"n cannot be both a negative integer and a zero"<<endl;
	cout<<"a and d cannot be zeros"<<endl;
	system ("pause");
	return 0;
}
