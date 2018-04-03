#include<isostream>
#include<cmath>
using namespace std;
int main();
{
	long long n;
	int num,i;
	
	cout<<"Please in put number:";
	cin>>n;
	
	num=n%pow(10,19)%pow(10,18)%pow(10,17)%pow(10,16)%pow(10,15)%pow(10,14)%pow(10,13)%pow(10,12)%pow(10,11)%pow(10,10)%pow(10,9)%pow(10,8)%pow(10,7)%pow(10,6)%pow(10,5)%pow(10,4)%pow(10,3)%pow(10,2)%pow(10,1);
	
	if(n>0&&num%2=0){
		cout<<"Summation of Even number"<<endl;
		cout<< <<"="<<sum;
}
	else if(n>0&&num%2=1){
	cout<<"Sumation of Odd number"<<endl;
	cout<< <<"="<<sum;
}
	else (n<0)
	cout<<"!! Wrong Input !!";
	
	system("pause");
	return 0;
	
}
