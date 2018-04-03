#include<iostream>
using namespace std;
int main()
{
	long long n;
	int sum;
	cout<<"Please input number : ";
	cin>>n;
	if(n<0)
	cout<<"!! Wrong Input !!";
	else if(n%2==0)
	{
		cout<<"Summation of Even number";
	}
	else if(n%2==1)
	{
		cout<<"Summation of Odd number";
	}
	system("pause");
	return 0;
}
