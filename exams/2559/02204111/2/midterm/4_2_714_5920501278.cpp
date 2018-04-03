//5920501278 supannika sentima
#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum;
	cout<<"Enter a positive integer:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		
	
		if(n%i==0)
		{
				sum=n/i;
				
			cout<<" "<<sum<<"*"<<i<<" "<<"="<<n<<endl;
            
		}
	
	}
	cout<<"invalid number!!"<<endl;
	system("pause");
	return 0;
}
