//5620550362 Khorakot Saiyanart

#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	char x,y;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	cout<<"Enter 3rd number : ";
	cin>>c;
	cout<<"Enter 4th number : ";
	cin>>d;
	cout<<endl;
	if(a)
	{
		if(a<b&&a<c&&a<d)
		{
			 cout<<"1st number is Minimum"<<endl;
		}
		if(b<a&&b<c&&b<d)
		{
			cout<<"2nd number is Minimum"<<endl;
		}
		if(c<a&&c<b&&c<d)
		{
			cout<<"3rd number is Minimum"<<endl;
		}
		if(d<a&&d<b&&d<c)
		{
			cout<<"4th number is Minimum"<<endl;
		}
	   	
    }
    if(b)
    {
    	if(a>b&&a>c&&a>d)
		{
			cout<<"1st number is Maximum"<<endl;
		}
		if(b>a&&b>c&&b>d)
		{
			cout<<"2nd number is Maximum"<<endl;
		}
		if(c>a&&c>b&&c>d)
		{
			cout<<"3rd number is Maximum"<<endl;
		}
		if(d>a&&d>b&&d>c)
		{
			cout<<"4th number is Maximum"<<endl;
		}
		
    }
   
    if(c)
    {
    	cout<<"The difference between Min. and Max. is "<<b-a<<endl;
    }
	system("pause");
	return 0;
}
