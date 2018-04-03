//5920550155 Jirayut Nithinon
#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"Enter a positive integer: ";
	cin>>a;
	if(a>0)
	{
		
		b=(a%10);
		cout<<"Number of digit is "<<b<<endl;
		
	

	do
	{
		cout<<"Factor of "<<a<<"are: "<<endl;
	
		
	}while(b>a);	
	i=1;
		while(b%a==0)
			{
			i=i/b;
			cout<<i<<" * "<<b<<" = "<<a<<endl;
			i++;
			}
		

	
	}
	else
	{
		cout<<"Invalid number!!"<<endl;
	}
		
	system("pause");
	return 0;
}
