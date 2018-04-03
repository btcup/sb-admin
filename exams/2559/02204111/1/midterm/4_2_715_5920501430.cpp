// 5920501430 Jidapa Buranachan
#include <iostream>
using namespace std;
int main ()
{
	int n1,n2,n3,n4,max,min;
	cout<<"Enter 1st number : ";
	cin>>n1;
	cout<<"Enter 2nd number : ";
	cin>>n2;
	cout<<"Enter 3rd number : ";
	cin>>n3;
	cout<<"Enter 4th number : ";
	cin>>n4;

	if (n1<n2&&n1<n3&&n1<n4&&n4>n2&&n4>n3)
	{
	min=n1;
	max=n4;
	cout<<"1st number is Minimum"<<endl;
	cout<<"4th number is Maxinum"<<endl;
	cout<<"The difference between Min. and Max. is "<<(max-min)<<endl;
	}
	else if (n2<n1&&n2<n3&&n2<n4&&n4>n1&&n4>n3)
	{
	min=n2;
	max=n4;
	cout<<"2nd number is Minimum"<<endl;
	cout<<"4th number is Maxinum"<<endl;
	cout<<"The difference between Min. and Max. is "<<(max-min)<<endl;
	}
	else if (n3<n1&&n3<n2&&n3<n4&&n4>n1&&n4>n2)
	{
	min=n3;
	max=n4;
	cout<<"3rd number is Minimum"<<endl;
	cout<<"4th number is Maxinum"<<endl;
	cout<<"The difference between Min. and Max. is "<<(max-min)<<endl;
	}
	else if (n4<n1&&n4<n2&&n4<n3&&n1>n2&&n1>n3)
	{
	min=n4;
	max=n1;
	cout<<"4th number is Minimum"<<endl;
	cout<<"1st number is Maxinum"<<endl;
	cout<<"The difference between Min. and Max. is "<<(max-min)<<endl;
	}
	else if (n1<n2&&n1<n3&&n1<n4&&n3>n2&&n3>n4)
	{
	min=n1;
	max=n3;
	cout<<"1st number is Minimum"<<endl;
	cout<<"3rd number is Maxinum"<<endl;
	cout<<"The difference between Min. and Max. is "<<(max-min)<<endl;
	}
	else if (n1<n2&&n1<n3&&n1<n4&&n2>n3&&n2>n4)
	{
	min=n1;
	max=n2;
	cout<<"1st number is Minimum"<<endl;
	cout<<"2nd number is Maxinum"<<endl;
	cout<<"The difference between Min. and Max. is "<<(max-min)<<endl;
	}
	else if (n4<n1&&n4<n2&&n4<n3&&n2>n1&&n2>n3)
	{
	min=n4;
	max=n2;
	cout<<"4th number is Minimum"<<endl;
	cout<<"2nd number is Maxinum"<<endl;
	cout<<"The difference between Min. and Max. is "<<(max-min)<<endl;
	}


	system ("pause");
	return 0;
}
