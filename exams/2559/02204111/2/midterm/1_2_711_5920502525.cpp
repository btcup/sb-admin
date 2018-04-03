//5920502525 Ms.Mitsinee Loeskiadtikul
#include <iostream>
using namespace std;
int main()
{
	int N,i,max;
	do
	{
	cout<<"Enter N : ";
	cin>>N;
	}
	while(N<=0);
	for(i=2;i<N;)
	{
		if(N%i==0)
		{
			if(i<N)
			max=N/i;
			max=i;
			i++;
			cout<<"The greatest factor of "<<N<<" is "<<max<<endl;
		}
		else
		{
			cout<<"The greatest factor of "<<N<<" is "<<max<<endl;break;
			cout<<"prime number ";
		}
	}
	system("pause");
	return 0;
}
