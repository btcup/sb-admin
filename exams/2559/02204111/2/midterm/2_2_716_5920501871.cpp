//5920501871 Sopida Areekit
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,sum1,sum2;
	cout<<"Enter an integer :";
	cin>>a;
	sum1=a++;
	cout<<"Number of digit is "<<sum1<<endl;
	sum2=pow(a,a++);
	if(sum1==sum2)
	cout<<a<<" is a target number."<<endl;
	else
	cout<<a<<" not is a target number."<<endl;
	system ("pause");
	return 0;
}
