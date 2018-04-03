//5920551089 Pannawit Katchasuwanmanee
#include<iostream>
using namespace std;

int main()
{
    double n,a,r,s,i;
    cout<<"Enter n, a and r: ";
    cin>>n>>a>>r;
    
    if(n>0&&a!=0&&r!=0)
    {
    cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
    
    while(i<n)
    i=1;
    i++;
    s=a*r;
    
    cout<<s;
    
    }
    
                    



else if (n<0)
cout<<" n cannot be both a negative integer and a zero";
else if(a==0)
cout<<"a cannot be a zero ";
else if(r==0)
cout<<"r cannot be a zero ";


  

    
    system("pause");
    return 0;
}
