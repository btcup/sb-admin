// 5620500942 Rutthatip Wongsenanurak
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,d,e,f,g,h,i;

cout<<"Enter 1st number : ";
cin>>a;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<"Enter 3rd number : ";
cin>>c;
cout<<"Enter 4th number : ";
cin>>d;
if(a>b&&a>c&&a>d)
cout<<"1st number is maximum"<<endl;
else if(b>a&&b>c&&b>d)
cout<<"2nd number is maximum"<<endl;
else if(c>a&&c>b&&c>d)
cout<<"3rd number is maximum"<<endl;
else if(d>a&&d>b&&d>c)
cout<<"4th number is maximum"<<endl;
cout<<"Enter 1st number : ";
cin>>a;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<"Enter 3rd number : ";
cin>>c;
cout<<"Enter 4th number : ";
cin>>d;
if(a<b&&a<c&&a<d)
cout<<"1st number is minimum"<<endl;
else if(b<a&&b<c&&b<d)
cout<<"2nd number is minimum"<<endl;
else if(c<a&&c<b&&c<d)
cout<<"3rd number is minimum"<<endl;
else if(d<a&&d<b&&d<c)
cout<<"4th number is minimum"<<endl;




system("pause");
return 0;
}































