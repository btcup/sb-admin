#include <iostream>
using namespace std;
int main()
{
	float a,b,c,d,e;
	
	while(1)
	{
	
		cout<< "Enter n, a and d :";
	cin>>a>>b>>c;
	
	if(a>=1)
	{
		cout<<"The arithmetic progression of n="<<a<<",a="<<b<<",d="<<c<<endl;
		d=b;
		e=0;
		while(1)
		{   
		if(a>0)
		{
		cout<<d<<" ";
		e=e+d;
		d= d+c;
		a--;
		}
		if(a==0)
		{
		cout<<endl<<e<<endl;break;
		}		       	
		}
	
}
	else
	{
		cout<<"n cannot be both a negative integer and a zero"<<endl;
	}
			
}	
	system("pause");
	return 0;
	}

