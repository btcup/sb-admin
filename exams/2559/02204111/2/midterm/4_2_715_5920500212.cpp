//5920500212 Supakorn Ketpien
#include<iostream>
using namespace std;
int main()
{int a,i=1,b,d,n=0;
cout<<"Enter a positive integer:";
cin>>a;
d=a;
while(d>0)
{d=d/10;
n++;
}
if(a>0){
cout<<"Number of digit is"<<n<<endl;

cout<<"Factor of"<<a<<"are"<<endl;
while(i<=a)
{if(a%i==0) cout<<i<<"*"<<(a/i)<<"="<<a<<endl;
i++;
}}
else cout<<"Invalid number!!"<<endl;
	
	
	
	
	
	
	system("pause");
	return 0;
}
