#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n,i;
 float a,r,sum;
 cout<<"Enter n, a and r: ";
 cin>>n>>a>>r;
 if(n<=0&&a>0&&r>0)
 cout<<"n cannot be both a negative integer and a zero"<<endl;
 else if(n<=0&&a==0&&r>0)
 cout<<"n cannot be both a negative integer and a zero"<<endl<<"a cannot be zero"<<endl;
 else if(n<=0&&a>0&&r==0)
 cout<<"n cannot be both a negative integer and a zero"<<endl<<"r cannot be zero"<<endl;
 else if(n<=0&&a==0&&r==0)
 cout<<"n cannot be both a negative integer and a zero"<<endl<<"a and r cannot be zeros"<<endl;
 else 
 {
 cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
 for(i>=1;i<=sum+i;i=i*2)
 {
 cout<<a*pow(r,n-1)<<endl;
 sum=sum*2;
 cout<<"The summation: "<<sum<<endl;
 }
 }
system("pause");
return 0;   
}
