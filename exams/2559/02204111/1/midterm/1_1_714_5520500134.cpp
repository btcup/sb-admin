#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	//5520500134 Mr.wahtcharain chookbunprasong
	float n,a,d,i,x,y=0;
	cout<<"Enter n,a, and d:";
	cin>>n>>a>>d;

	
		for(i=1;i<=n;i++)
		{
			if(n*a*d!=0&&n>=1)
			{
			cout<<"The arithetic progression of n="<<n<<",a="<<a<<",d="<<d<<":"<<endl;
			(x=(a+i*d));
			cout<<x;
		    cout<<"The summation:"<<(y=x+x)<<endl;
	    	}
	        else if (n==0||n<=0)
	    		{
	    		cout<<"n cannot be both a negative integer and a zero"<<endl;
	    		cin>>n>>a>>d;}
	        else if (a==0)
	        	{
	        	cout<<"a cannot be a zero"<<endl;
	        	cin>>n>>a>>d;}
	        else if (d==0)
	        	{
	        	cout<<"d cannot be a zero"<<endl;
	        	cin>>n>>a>>d;}
	         else if (d==0&&n==0&&a==0)
	        	{
	        	cout<<"n cannot be both a negative integer and a zero"<<endl;
	        	cin>>n>>a>>d;}
		}
		
	
	system ("pause");
	return 0 ;
}
