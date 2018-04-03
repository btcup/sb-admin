//5920503327 Supaporn Pattanakaew
#include<iostream>
using namespace std;
int main()
{
	int N,a,n;
	cout<<"Enter an intrger : ";
	cin>>N;
	a=N%100;
	n=(N*10)/N;
	cout<<"Number of digit is "<<n<<endl;
	
	cout<<N<<" is a target number."<<endl;
	system ("pause");
	return 0;
}
