#include <iostream>
using namespace std;
int main()
{
	float n,a,r,x;
	
	do 
	{
	cout<<"Enter n, a and r: ";
	cin>>n>>a>>r;
	
	if (n<=0&&a!=0&&r!=0)
	cout<<"n cannot be both a negative integer and a zero"<<endl;
	
	else if (n<=0&&a==0&&r==0)
	cout<<"n cannot be both a negative integer and a zero"<<endl<<"a and r cannot be zeros"<<endl;
	
	else if (n>0&&a==0&&r!=0)
	cout<<"a cannot be zero"<<endl;
	
	else if (n>0&&a!=0&&r==0)
	cout<<"r cannot be zero"<<endl;

	else 
	cout<<"The grometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
	}
	
	while (n<=0||r==0||a==0);
	


system ("pause");
return 0;	
}





