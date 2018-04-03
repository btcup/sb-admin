// 5920501405 Kunlada Littichoktanadol
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,x,total,sum;
	cout<<"input value : ";
	cin>>n;
	while(n>=0)
	{
		if(n>=0&&n<10)
		sum=sum+(n*pow(10,n));
			cout<<"input value : ";
			cin>>n;
		if(n>9)
			cout<<"Invalid Input!! Try Again"<<endl;
			cout<<"input value : ";
			cin>>n;
			continue;
			n--;
	}
		cout<<endl;
		cout<<"Total is "<<sum<<endl;
		
}
