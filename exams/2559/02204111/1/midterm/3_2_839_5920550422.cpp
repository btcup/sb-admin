//5920550422 Suthinee Chanchinda
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double a,b,c,x,y;
	char i;
	cout<<"Enter coefficients a,b and c:";
	cin>>a>>b>>c;
	if (pow(b,2)-4*a*c>0)
	{
		x = (-b+(sqrt((pow(b,2)-4*a*c))))/(2*a);
		y = (-b-(sqrt((pow(b,2)-4*a*c))))/(2*a);
		cout<<"Roots are real and differrent."<<endl;
		cout<<"x1 = "<<x<<endl;
		cout<<"x2 = "<<y<<endl;
	}
	else if (pow(b,2)-4*a*c==0)
	{
		x = (-b+(sqrt((pow(b,2)-4*a*c))))/(2*a);
		y = (-b+(sqrt((pow(b,2)-4*a*c))))/(2*a);
		cout<<"Roots are real and same."<<endl;
		cout<<"x1 = x2 = "<<x<<endl;
	}
	else
	{
		x = (-b/2*a)+(((sqrt(-(pow(b,2)-4*a*c)))/(2*a))*i);
		y = (-b/2*a)-(((sqrt(-(pow(b,2)-4*a*c)))/(2*a))*i);
		cout<<"Roots are complex and different."<<endl;
		cout<<"x1 = "<<x<<endl;
		cout<<"x2 = "<<y<<endl;
	}
	system ("pause");
	return 0;
}
