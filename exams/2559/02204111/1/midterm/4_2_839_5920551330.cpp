//5920551330 Chularat Parpbuntarik
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter 1st number :";
	cin>>a;
	cout<<"Enter 2nd number :";
	cin>>b;
	cout<<"Enter 3rd number :";
	cin>>c;
	cout<<"Enter 4th number :";
	cin>>d;
	if(a<b&&a<c&&a<d)
	cout<<"1st number is Minimum"<<endl;
	if(a>b&&a>c&&a>d)
	cout<<"1st number is Maximum"<<endl;
	
	if(b<a&&b<c&&b<d)
	cout<<"2nd number is Minimum"<<endl;
	if(b>a&&b>c&&b>d)
	cout<<"2nd number is Maximum"<<endl;
	
	if(c<a&&c<b&&c<d)
	cout<<"3rd number is Minimum"<<endl;
	if(c>b&&c>a&&c>d)
	cout<<"3rd number is Maximum"<<endl;
	
	
	if(d<a&&d<c&&d<b)
	cout<<"4th number is Minimum"<<endl;
	if(d>a&&d>b&&d>c)
	cout<<"4th number is Maximum"<<endl;
	
	system("pause");
	return 0;

}
