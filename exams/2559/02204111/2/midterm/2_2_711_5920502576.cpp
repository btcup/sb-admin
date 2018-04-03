//5920502576 Sunitra Rakkanrob

#include <iostream>
using namespace std;
int main ()
{
	int n,y;
	float x;
	cout<<"Enter an integer: ";
	cin>>x;
if(x<100)
{
	n=2;
	cout<<"Number of digit is "<<n<<endl;
	
}
if(x>=100&&x<1000)
{
	n=3;
	cout<<"Number of digit is "<<n<<endl;

}
if(x>=1000&&x<10000)
{
	n=4;
	cout<<"Number of digit is "<<n<<endl;
}
if(x>=10000&&x<100000)
{
	n=5;
	cout<<"Number of digit is "<<n<<endl;
}
if(x>=100000&&x<1000000)
{
	n=6;
	cout<<"Number of digit is "<<n<<endl;
}
system("pause");
return 0;
}
