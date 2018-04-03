// 5920550368 Noppadon Paisalwarn
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,y,x,z,f,t;
	char i;
	i=i;
	cout<<"Enter coefficients a, b and c:";
	cin>>a>>b>>c;
	y = pow(b,2)-4*a*c;
	if(y>0)
	{
		cout<<"Roots are real and differrent."<<endl;
		x=-b+sqrt(pow(b,2)-4*a*c)/2*a;
		cout<<"x1 = "<<x<<endl;
	    z=-b-sqrt(pow(b,2)-4*a*c)/2*a;
    	cout<<"x2 = "<<z<<endl;
	}
	else if(y==0)
	{
	cout<<"Roots are real and same."<<endl;
	x=-b+sqrt(pow(b,2)-4*a*c)/2*a;
		cout<<"x1 = x2 = "<<x<<endl;
	}
	else if(y<0)
	{
	cout<<"Roots are complex and differrent."<<endl;	
	x=-b/2*a;
	z=(sqrt(-(pow(b,2)-4*a*c)/2*a))*i;
	cout<<"x1 = "<<x<<" + "<<z<<endl;
	t=-b/2*a;
	f=(sqrt(-(pow(b,2)-4*a*c)/2*a))*i;
	cout<<"x2 = "<<t<<" - "<<f<<endl;
	}
	system("pause");
	return 0;
}	
