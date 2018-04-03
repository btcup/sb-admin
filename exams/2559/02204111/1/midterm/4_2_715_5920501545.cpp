// 5920501545 Teeranun Thuengsri
#include <iostream>
using namespace std;
int main()
{
	int x,y,z,a,sum;
	cout<<"Enter 1st number:";
	cin>>x;
	cout<<"Enter 2nd number:";
	cin>>y;	
	cout<<"Enter 3rd number:";
	cin>>z;	
	cout<<"Enter 4th number:";
	cin>>a;
	if(x<y&&x<z&&x<a)
	
	cout<<"1st number is Minimum"<<endl;
	
	else if(y<x&&y<z&&y<a)
	cout<<"2nd number is Minimum"<<endl;
	
	else if(z<x&&z<y&&z<a)
	cout<<"3rd number is Minimum"<<endl;
	
	
	else if(a<x&&a<y&&a<z)
	cout<<"4th number is Minimum"<<endl;
	
	
   	if(x>y&&x>z&&x>a)
	
	cout<<"1st number is Maximum"<<endl;	
	

	if(y>x&&y>z&&y>a)
	
	cout<<"2nd number is Maximum"<<endl;
	
	if(z>x&&z>y&&z>a)
	
	cout<<"3rd number is Maximum"<<endl;
	
	if(a>x&&a>y&&a>z)
	
	cout<<"4th number is Maximum"<<endl;
	
	
	
	
if(x<y&&x<z&&x<a&&a>x&&a>y&&a>z)
 
{
sum = a-x;
cout<<"The difference between Min.and Max is "<<sum;}

 if (y<x&&y<z&&y<a&&z>x&&z>y&&z>a)
 
 {
 sum = z-y;
cout<<"The difference between Min.and Max is "<<sum;	}


system("pause")	;
return 0;	
	
}
