// 5920501405 Kunlada Littichoktanadol
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1,x2,d,i;
	int a,b,c;
	cout<<"Enter coefficients a,b and c : ";
	cin>>a>>b>>c;
	d=pow(b,2)-4*a*c;
	if(d>0)
	x1=((-b)+(sqr(d)))/2;
	x1=((-b)-(sqr(d)))/2;
		cout<<"Root are real and different."<<endl;
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	else if(d==0)
	x1=x2=((-b)+(sqr(d)))/2;
		cout<<"Root are real and same."<<endl;
		cout<<"x1=x2="<<x1<<endl;
	else
	x1=(-b/2*a)+(((sqr(d))/2)*i);
	x2=(-b/2*a)-(((sqr(d))/2)*i);
		cout<<"Root are complex and different."<<endl;
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	system("pasue")
	return;
}
