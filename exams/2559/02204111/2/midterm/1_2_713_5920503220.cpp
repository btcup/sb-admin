//59205803220 Rattanavalee Jantree
#include<iostream>
using  namespace std;
int main()
{
	int n,i;
	do
	{cout<<"Enter N:";
	 cin>>n;
		for(i=0;i<n;n%i==0)
		{i%i==0;
		i++;
	}
			cout<<"The greatest factor of "<<n<<" is "<<i;
	if(i=n)
	{cout<<"--> prime number";}
    }while(n<=0);
	return 0;
}

