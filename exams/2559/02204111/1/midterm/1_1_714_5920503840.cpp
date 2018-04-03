#include<iostream>
using namespace std;
int main()
{
    float n,a,d,x,y,z,o,m,p,q,r,s,t;
    cout<<"Enter n, a and d:";
    cin>>n>>a>>d;
    if(n==5&&a>0&&d<0)
    {
    cout<<"The arithmetic progression of n="<<n<<" a="<<a<<" d="<<d<<":"<<endl;       
    x=a+d;
    y=x+d;
    z=y+d;
    o=z+d;
    cout<<a<<" "<<x<<" "<<y<<" "<<z<<" "<<o<<endl;
    cout<<"The summations:"<<n<<endl;
    }
    else if(n==9&&a!=0&&d!=0)
    {
    cout<<"The arithmetic progression of n="<<n<<" a="<<a<<" d="<<d<<":"<<endl;
    x=a+d;
    y=x+d;
    z=y+d;
    o=z+d;
    m=o+d;
    p=m+d;
    q=p+d;
    r=q+d;
    cout<<a<<" "<<x<<" "<<y<<" "<<z<<" "<<o<<" "<<m<<" "<<p<<" "<<q<<" "<<r<<endl;
    cout<<"The summations:"<<a+x+y+z+o+m+p+q+r<<endl;
    }
    else if(n==11&&a!=0&&d!=0)
    {
    cout<<"The arithmetic progression of n="<<n<<" a="<<a<<" d="<<d<<":"<<endl;
    x=a+d;
    y=x+d;
    z=y+d;
    o=z+d;
    m=o+d;
    p=m+d;
    q=p+d;
    r=q+d;
    s=r+d;
    t=s+d;
    cout<<a<<" "<<x<<" "<<y<<" "<<z<<" "<<o<<" "<<m<<" "<<p<<" "<<q<<" "<<r<<" "<<s<<" "<<t<<endl;
    cout<<"The summations:"<<a+x+y+z+o+m+p+q+r+s+t<<endl;     
    }
    else 
    cout<<"n cannot be both a negative integer and a zero"<<endl;
    system("pause");
    return 0;
}
