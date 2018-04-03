//5620550362 Khorakot Saiyanart

#include <iostream>
using namespace std;
int main()
{
	int x,sum,n;
	cout<<"input value: ";
	cin>>x;
	
	while(x>=0)
	{
		if(x>=0&&x<=9)
		{
		sum=x*1000;	
		cout<<"input value: ";
		cin>>x;
		}
		
		else 
		{
		cout<<"Invalid Input!!"<<endl;;
		break;
		}
		
	}
	cout<<endl;
	cout<<"Your money is "<<x<<" = "<<sum<<" + "<<sum<<" + "<<endl;
	system("pause");
	return 0;
}
