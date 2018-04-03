//5920501804 Andaman Pankaew
#include<iostream>

using namespace std;
int main()
{
	int n,a,b,d,i,j;
	cout<<"Enter a positive is : ";
	cin>>n;
	if(n<=0)
	cout<<"Invalid number !!\n";
	else
	{
	cout<<"Number of digit is ";
	for(i=10,j=0;d>0;i*=10,j++)
	{  
		d=n/i;
	}
	cout<<j<<endl;
	cout<<"Factor of "<<n<<" are : "<<endl;
	for(a=1;a<=n;a++)
	{
	 if(n%a==0)
	 {
	 b=n/a;

	 cout<<a<<"*"<<b<<"="<<n<<endl;
	 }
	}
	
}
	
	system("pause");
	return 0;

}
