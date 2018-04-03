#include<iostream>
using namespace std;
int main()
{
	double w,l,c;
	
	do
	{
	cout<<"Enter electricity cost per unit (bath): ";
	cin>>w;
	}
	while (w<=0);
	
	cout<<"Enter last unit: ";
	cin>>l;
	cout<<"Enter current unit: ";
	cin>>c;
	if(c<l&&c>99999&&l>99999)
	cout<<"Invalid current unit"<<endl;
	
	
	

	//cin<<w;
//	}
//	cout<<"Enter last unit: ";
//	Enter current unit:
system("pause");
return 0;
}

