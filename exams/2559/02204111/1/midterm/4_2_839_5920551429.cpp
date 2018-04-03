// 5920551429   Tananop  Muanlhao
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	bool Minimum,Maximum;
	int w,x,y,z,a,b;
	cout<<"Enter 1st number : ";
	cin>>w;
	cout<<"Enter 2nd number : ";
	cin>>x;
	cout<<"Enter 3rd number : ";
	cin>>y;
	cout<<"Enter 4th number : ";
	cin>>z;
		if(w<x && w<y && w<z)
		{
		cout<<"1st number is Minimum"<<endl;
		}
		if(x<w && x<y && x<z)
		cout<<"2nd number is Minimum"<<endl;
		if(y<w && y<x && y<z)
		cout<<"3rd number is Minimum"<<endl;
		if(z<w && z<x && z<y)
			cout<<"4th number is Minimum "<<endl;
			if(w>x && w>y && w>z)
			cout<<"1st number is Maximum"<<endl;
			if(x>w && x>y && x>z)	
				cout<<"2nd number is Maximum"<<endl;
				if(y>w && y>x && y>z)
					cout<<"3rd number is Maximum"<<endl;

		if(z>w && z>x && z>y)
		{
		cout<<"4th number is Maximum"<<endl;
		}
		cout<<"The difference between Min and Max is "<<z-w<<endl;
		system("pause");
		return 0;
}
		
	
		

