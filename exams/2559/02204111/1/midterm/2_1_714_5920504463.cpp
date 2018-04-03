// 5920504463 SIRIWUT SONMANEE
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n,a,r,x;
    cout<<"Enter n , a and r: ";
    cin>>n>>a>>r;
    cout<<"The geometric progression of n="<<n<<"a="<<a<<"r="<<r<<endl;
                 if (n<=0)
                 cout<<"n cannot be both a negative integer and zero"<<endl;
                 else if (a<=0)
                 cout<<"a cannot be a zero"<<endl;
                 else if (r<=0)
                 cout<<"r cannot be a zero"<<endl;
                 else if (n<=0 && a<=0)
                 cout<<"n and a cannot be a zero"<<endl;
                 else if (a<=0 && r<=0)
                 cout<<"a and r cannot be a zero"<<endl;
                 else if (n<=0 && r<=0)
                 cout<<"n and r cannot be a zero"<<endl;
                 system("pause");
                 return 0;
}
