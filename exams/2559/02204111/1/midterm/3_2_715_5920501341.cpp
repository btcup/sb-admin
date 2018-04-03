// 5920501341 Kamolchanok Saisorn
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float ax1,bx1,x1,x2,a,b,c,d,cx1,dx1,x1_2,ex1,fx1,gx1,xx1,xx2;
	cout<<"Enter coefficients a, b and c: ";
	cin>>a>>b>>c;
	d = pow(b,2)-(4*a*c);
	if(d>0)
	{
	ax1 = -1*b;
	bx1 = sqrt(pow(b,2)-4*a*c);
	x1 = (ax1 + bx1)/(2*a);
	x2 = (ax1 - bx1)/(2*a);
	cout<<endl;
	cout<<"Roots are real and different."<<endl;
	cout<<"x1 = "<<x1<<endl;
	cout<<"x2 = "<<x2<<endl;
    }
	else if(d==0)
	{
	cx1 = -1*b;
	dx1 = sqrt(pow(b,2)-4*a*c);
	x1_2 = (cx1 + dx1)/(2*a);
	cout<<endl;
	cout<<"Roots are real and same."<<endl;
	cout<<"x1 = x2 = "<<x1_2<<endl;

    }
	else if(d<0)
	{
	ex1 = -1*b;
	gx1 = sqrt(-1*(pow(b,2)-4*a*c));
	fx1 = 2*a;
	xx1 = ex1/fx1;
	xx2 = gx1/fx1;

	cout<<endl;
	cout<<"Roots are complex and different."<<endl;
	cout<<"x1 = "<<xx1<<" + "<<xx2<<"i"<<endl;
	cout<<"x2 = "<<xx1<<" - "<<xx2<<"i"<<endl;
    }

		
	system("pause");
	return 0;
}
