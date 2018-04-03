// 5920501430 Jidapa Buranachan
#include <iostream>
using namespace std;
int main()
{
	int n,x,sum;
	cout<<"input value: ";
	cin>>n;
	for( ;n!=-1;n++)
	{	
		cout<<"input value: ";
		cin>>n;
		sum=sum+n;
		if(n>9)
		{
		cout<<"Invalid Input!!"<<endl;
		continue;
		}
		if(n==-1)	
		{
		cout<<"Your money is "<<sum<<"="<<endl;
		break;
		}
	}
	
system ("pause");
return 0;
}

