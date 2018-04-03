//5920503998 Nonnarat Manchuen
#include <iostream>
using namespace std;
int main()
{
	int a,x,y,z;
	cout<<"Enter a positive integer: ";
	cin>>x;
	if(x>0)
	{
		cout<<"Number of digit is :";
		cin>>a;
		cout<<"Factor of "<<x<<" are :"<<endl;
		for(y=1;y<=x;y++)
		{
			if(x%y==0)
			{
				z=x/y;
				z;
				cout<<y<<"*"<<z<<"= "<<x<<endl;	
				
			}
	
		}
	}
	else
	cout<<"Invalid number!!"<<endl;
	system("pause");
	return 0;
} 
