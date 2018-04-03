
#include<iostream>
using namespace std;
int main()
{
int n,i=2;

do
{
    cout<<"Enter n: ";
	cin>>n;	
	
	do
	{
	
	if(i=n)
	{
	cout<<"The greatest factor of "<<n<<" is "<<i<<" --> prime number"<<endl;break;
	}
	else if(i<n)
	{
	cout<<"The greatest factor of"<<n<<" is "<<i<<endl;
	}
	}
	while(n%i==0);
}
while(n<=0);
system("pause");
return 0;
}
