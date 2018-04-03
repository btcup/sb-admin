#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
    int n;
    duble a,r,i,x,sum=0;
    cout<<"Enter n, a and r :";
    cin>>a>>n>>r;
    
    while(n>0||a==0||r==0)
    {
        cout<<"The cannot be both a negative and a zero"<<endl;
        cout<<"Enter n, a and r :";  
        cin>>a>>n>>r;               
}

cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
for(i=1;i<=n;i=i+1)
{
                 x==a*(pow(r,i));
                 cout<<x;
                 sum=sum+x;
                 }
                 
cout<<"The summation:"<<sum<<endl;



system("pause");
return 0;
}
