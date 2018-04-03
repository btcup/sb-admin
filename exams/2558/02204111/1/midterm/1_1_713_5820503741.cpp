#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int usa=1,vol,tot,a;
	double b,ele,ser,ft,vat;
	cout<<"Please input usage :";
	cin>>usa;
	if(usa<0)
	{
	cout<<"Invalid Input !!!"<<endl;
}
    else
    
	cout<<"Please input voltage :";
	cin>>vol;
	if(a==22&&a==23)
	{
	cout<<"Electricity Cost :"<<b<<endl;
	b=a*2.4649;
	cout<<"Service :"<<ser<<endl;
	ser=228.17;
	cout<<"Ft :"<<ft<<endl;
	ft=b/46.38;
	cout<<"Vat 7 % :"<<endl;
	vat=b*0.7;
	cout<<"Total cost :"<<tot<<endl;
	tot=(usa*b)+ser+(ft*usa)+vat;
}
    else if(a<22)
	{
	if(ele>=0||ele<=150)
	{
	cout<<"Electricity Cost 0-150 :"<<b<<endl;
	b=a*1.8047;
}
    else if(ele>=151||ele<=400)
	{
	cout<<"Electricity Cost 151-400 :"<<b<<endl;
	b=a*2.7781;
}
    else if(ele<=401)
	{
	cout<<"Electricity Cost 401-> :"<<b<<endl;
	b=a*2.9780;
}
	cout<<"Service :"<<ser<<endl;
	ser=40.90;
	cout<<"Ft :"<<ft<<endl;
	ft=b/46.38;
	cout<<"Vat 7 % :"<<endl;
	vat=b*0.7;
	cout<<"Total cost :"<<tot<<endl;
	tot=(usa*b)+ser+(ft*usa)+vat;
}
	system("pause");
	return 0;
}
