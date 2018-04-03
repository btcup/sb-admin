//5920503661 Khanison Sapmak
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float a,r,x;
	cout<<"Enter n, a and r : ";
	cin>>n>>a>>r;
	if(n>0&&a>0&&r<0||n>0&&a<0&&r>0)
	{
		cout<<"The geometric progression of" "n="<<n<<","  "a="<<a<<", ""r="<<r<<":"<<endl;
	x=a*pow(r,n-1);
	
	cout<<"The summation: "<<x<<endl;
		
	}
	else if(n<=0&&a>=0&&r>0)
	
		cout<<"n cannot be both a negative interger and a zero "<<endl;
	else if(n<0&&a==0&&r==0)
	{
	
		cout<<"n cannot be both a negative interger and a zero "<<endl;
	    cout<<"a and r cannot be zero"<<endl;
	}
    else if(n<0&&a==0&&r>=0)
	
		cout<<"a and r cannot be zero "<<endl;
	else if(n>0&&a==0&&r>0)
	
		cout<<"a  cannot be zero "<<endl;	
	else
	cout<<" r cannot be zero "<<endl;
	     
	system("pause");
	return 0;
	
}
