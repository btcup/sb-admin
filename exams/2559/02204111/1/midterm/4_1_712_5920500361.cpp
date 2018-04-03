// 5920500361 Thanathon  Prempranee
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,sum,i,a,b;
	i=0;
	b=0;
	sum=0;
	do
	{
		cout<<"input value: ";
		cin>>x;
		if(x>=10)
		{
			cout<<"Invalid Input"<<endl;
		}
		else if(x<10&&x>=0)
		{
		sum=sum*10+x;i++;
		}
		
	}
	while(x>=0);
	cout<<"your money is "<<sum<<" =";
	for(a>=0;i>0;i--){
	
	if(b=0){
a=(floor(sum/pow(10,i-1)))*pow(10,i-1);cout<<a;
b++;
}
else if(b>0){
a=(floor(sum/pow(10,i-1)))*pow(10,i-1);cout<<a;
}}
	system("pause");
	return 0;
}
	
	



