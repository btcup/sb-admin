#include <iostream>
using namespace std;
int main ()
{
	double a,a1,a2,a3,b,c,d,e,f,g,h;
	cout<<"please input usage : ";
	cin>>a;
	cout<<"please input voltage : ";
	cin>>b;
	
	if((b>=22)&&(b<=33))
	{
		
		c=(a*2.4649);
		cout<<endl;
		cout<<"Electricity Cost : " <<c<<endl;
		d=228.17;
		cout<<"Service : " <<d<<endl;
		e=(46.38*a)/100;
		cout<<"Ft : " <<e<<endl;
		f=((c+d+e+f)*7.0)/100;
		cout<<"Vat 7 % : " <<f<<endl;
		cout<<endl;
		cout<<"Total Cost : " <<c+d+e+f<<endl;
	}
	
	if((b<22)&&(a>=0)&&(a<=150))
	
	{
		c=(a*1.8047);
		cout<<endl;
		cout<<"Electricity Cost 0-150 : " <<c<<endl;
		d=40.90;
		cout<<"Service : " <<d<<endl;
		e=(46.38*a)/100;
		cout<<"Ft : " <<e<<endl;
		f=((c+d+e+f)*7.0)/100;
		cout<<"Vat 7 % : " <<f<<endl;
		cout<<endl;
		cout<<"Total Cost : " <<c+d+e+f<<endl;
	}
	if((b<22)&&(a>=151))
	{
		a1=a;
		a2=a-150;
		a3=a-a2;
		c=(a3*1.8047);	
		cout<<endl;
		cout<<"Electricity Cost 0-150 : " <<c<<endl;
		
		g=a2*2.7781;
		cout<<"Electricity Cost 151-400 : " <<g<<endl;
		d=40.900;
		cout<<"Service : " <<d<<endl;
		a=a+150;
		e=(46.38*a1)/100;
		cout<<"Ft : " <<e<<endl;
		f=((c+d+e+f+g)*7.0)/100;
		cout<<"Vat 7 % : " <<f<<endl;
		cout<<endl;
		cout<<"Total Cost : " <<c+d+e+f+g<<endl;
	}
	
	if(a>400)
	{
		c=(a*1.8047);	
		cout<<endl;
		cout<<"Electricity Cost 0-150 : " <<c<<endl;
		
		g=(a-150)*2.7781;
		cout<<"Electricity Cost 151-400 : " <<g<<endl;
		cout<<"Electricity Cost 401 : " <<g<<endl;
		d=40.900;
		cout<<"Service : " <<d<<endl;
		a=a+150;
		e=(46.38*a1)/100;
		cout<<"Ft : " <<e<<endl;
		f=((c+d+e+f+g)*7.0)/100;
		cout<<"Vat 7 % : " <<f<<endl;
		cout<<endl;
		cout<<"Total Cost : " <<c+d+e+f+g<<endl;
	}
	if(a<0)
	cout<<"Invalid input usage !!!"<<endl;
	system ("pause");
	return 0;
}

