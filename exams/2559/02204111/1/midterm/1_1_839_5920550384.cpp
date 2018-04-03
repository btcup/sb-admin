#include <iostream>
using namespace std;
int main()
{
	double a,n,d,x;
	n > 0;
	a != 0; 
	d != 0;
	while(1)
	{
	cout<<"Enter n,a and d : ";
	cin>>n>>a>>d;
	if (n > 0 && a != 0 && d != 0)
	{
	x = a+d;
	cout<<"The arithmetic progression of n = "<<n<<" , a = "<<a<<" , d = "<<d<<" : \n";
	cout<<"the summetion  : "<<x<<"\n";
	}
	else if (n < 0&& a != 0 && d != 0)
	cout<<""<<n<<" cannot be both a negative integer and a zero.";
	else if(a < 0 && n > 0 && d != 0)
	cout<<""<<a<<" cannot be both a negative integer and a zero.";
	else if (d < 0 && n > 0 && a != 0 )
	cout<<""<<d<<" cannot be both a negative integer and a zero.";
	}
	system ("pause");
	return 0;
	
}
