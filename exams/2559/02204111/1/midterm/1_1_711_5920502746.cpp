#include <iostream>
using namespace std;
int main()
{
    double n,a,d,x,sum,i;

    
    cout<<"Enter n, a and d: ";
    cin>>n>>a>>d;
    
    while(n<=0&&a==0&&d==0)
    {
         if(n<=0)
         cout<<"n cannot be both a negative integer and a zero"<<endl;
         else if(a==0||d==0)
         cout<<"a and d cannot be zeros"<<endl;
         cout<<"Enter n, a and d: ";
         cin>>n>>a>>d;
    }
    
    cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<endl;
    
    while(a>=0)
    {
       x=a;
       cout<<x<<" ";
       sum=sum+a;
       a=a+d;
       
       
       
    }
    cout<<endl;
    cout<<"The summation:"<<sum<<endl;
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    system ("pause");
    return 0;
}
