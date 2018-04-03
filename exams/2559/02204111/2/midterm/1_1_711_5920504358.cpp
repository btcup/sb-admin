#include <iostream>
using namespace std;
int main()
{
    char k;
    float a,b,p,q,r,m,n,i,j,l,o,v,e,x,y,z;
    m=1385000;
    n=511500;
    i=738000;
    j=694000;
    l=0.0209;  
    o=0.0179;
    v=0.0199;
    e=0.0199;
    cout<<"------- Car lease calculator -------"<<endl;
    cout<<"Enter car model :";
    cin>>k;
    cout<<"Enter number of years (1-6):";
    cin>>a;
    if (a>6)
    cout<<"Error!,number of years is not in rage"<<endl;
    cout<<"Enter percentage of down payment :";
    cin>>b;
    cout<<"------------------------------------"<<endl;
    {
    if (k=='A')
    p=m;
    q=l;
    if (k=='B')
    p=n;
    q=o;
    if (k=='C')
    p=i;
    q=v;
    if (k=='J')
    p=j;
    q=e;
    }
    {
    if (a<4)
    r=q-0.001;
    else if (a>=4&&a<=6)
    r=q;
    }
    x=p-(p*(b/100));
    cout<<"Financing amount: "<<x<<endl;
    y=x*r*a;
    cout<<"Amount of interest: "<<y<<endl;
    z=(x+y)/(a*12);
    cout<<"Monthly payment: "<<z<<endl;
    system("pause");
    return 0;
}
    
    
    
    
