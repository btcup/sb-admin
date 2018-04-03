//5920502371 Thanyalak Chinenthon
#include<iostream>
using namespace std;
int main()
{
	int N,x;
	cout<<"Enter N : ";
	cin>>N;
	while(N<=0)
	{
		cout<<"Enter N : ";
		cin>>N;
	}
	while(N%2==0)
	{
	if(x<=N)
	{
		x = N%2;
		cout<<"The greatest factor "<<N<<" of is "<<x<<"--> prime number"<<endl;
		N++;
		x = N;
	}
}
	system("pause");
	return 0;
}

