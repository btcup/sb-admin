//5920502908 Withawat Sabayying Wat
#include <iostream>
using namespace std;
int main()
{
	int x,i,n,y,k,z;
	y = 1;
	i=0;
		cout<<"input value :";
		cin>>x;
		if(x>=0&&x<10)
		k = x ;
		if(x>=10)
		{
		cout<<"Invalid Input !! Try Again"<<endl;
		cout<<endl;
	}
		while(x>=0)
	{
		k = k*10;
		cout<<"input value :";
		cin>>x;
		if(x>=0&&x<10){
		if(x==0){
			z=y/10;
		}
		i = k+x*z;}
		z=y*10;
		if(x>=10)
		{
		cout<<"Invalid Input !! Try Again"<<endl<<endl;;
		continue;
		}
	}
	cout<<"Total is "<<i;
	cout<<endl;
	system ("pause");
	return 0;
}

