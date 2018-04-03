#include <iostream>
using namespace std;
int main()
{
    int n,i;
    double a,d,sum=0,x;
    do
    {   cout<<"Enter n, a and d: ";
        cin>>n>>a>>d;
        if (n<=0)
        cout<<"n cannot be both a negative integer and a zero"<<endl;
        if (a==0&&d==0)
        cout<<"a and d cannot be a zero"<<endl;
        else if (a==0)
        cout<<"a cannot be a zero"<<endl;
        else if (d==0)
        cout<<"d cannot be a zero"<<endl;
    }while (n<=0||a==0||d==0);
    
    cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<":"<<endl;
    
    for (i=0;i<n;i++)
    {   x=a+(i*d);
        cout<<x<<" ";
        
        sum = sum+x;
    }
    cout<<endl;
    cout<<"The summation:"<<sum<<endl;
    
   
    system("pause");
    return 0;
    
}
