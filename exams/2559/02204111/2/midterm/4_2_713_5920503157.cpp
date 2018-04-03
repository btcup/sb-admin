//5920503157 Bandit Kaeophaluek
#include<iostream>
using namespace std;
int main()
{
	int n,m=0,i,j,k;
	cout<<"Enter a positive integer: ";
	cin>>n;
	cout<<endl;
	if(n>0)
	{
	j=n;
	for(i=10;i<j;i=i*10)
	{
		j=j-(j%i);
		if(j!=0)
		m=m+1;
	}
	cout<<"Number of digit is "<<m+1<<endl;
	cout<<"Factor of "<<n<<" are:"<<endl;
	k=1;
	
	while(k<=n)
	{
	
		if(n%k==0)
		cout<<k<<" * "<<(n/k)<<"\t = "<<n<<endl;
		k++;
	}
	}
	else
	cout<<"Invalid number!!"<<endl;
	
	return 0;
}
