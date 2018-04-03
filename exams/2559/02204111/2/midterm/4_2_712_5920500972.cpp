//Ausadayud thongmak 5920500972
#include<iostream>
using namespace std;
int main()
{
	int n,m,i;
	cout<<"Enter a positive integer: ";
	cin>>n;
	i=1;
	while(n%i==0&&i<=n)
	{
		cout<<i<<" * "<<endl;
		i++;
	}
	
	system("pause");
	return 0;	
	
}
