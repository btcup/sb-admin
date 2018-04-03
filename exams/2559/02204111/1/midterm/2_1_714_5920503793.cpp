#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n=1;
    float a,r,x,sum;
    cout<<"Enter n, a and r:";
    cin>>n>>a>>r;
    if(n<=0)
    {
                        cout<<"n cannot be both a negative integer ans a zero"<<endl;
    }
    else if(a=0)
    {
            cout<<"a can not be zero"<<endl;
    }
    else if(r=0)
    {
         cout<<"r cannot be a zero"<<endl;
    }
    else if(n<=0&&a==0&&r==0)
    {
                        cout<<"n cannot be both a negative unteger ans a zero";
                        cout<<"a and r cannot be zero";
    }
    else
    {while(n>0&&a!=0&&r>0)
     continue;     
                         { cout<<"The gemotirc progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
                           x=a*pow(r,n);
                           cout<<x;
                           sum=sum+x;
                           cout<<"The summation:"<<sum;
                           }
    }
    system("pause");
    return 0;
}

