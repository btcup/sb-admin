//5920504013  Priyaporn Doungmalai
#include <iostream>
using namespace std;
int main()
{
	int n,i,sum,x=0,ans=0;
	cout<<"Enter an integer:";
	cin>>n;
	
	for(i=0;n>0 && x>=0 ;i++)
	{	 
		x=(n/10);
		n=x;		
	}
	cout<<"Number of digit is"<<i<<endl;
	ans=ans+(n%((i-1)*10));
	if(ans = n)
	cout<<n<<" is a target number."<<endl;
	if(ans != n)
	cout<<n<<"is not target number."<<endl;
	system ("pause");
	return 0;
}
