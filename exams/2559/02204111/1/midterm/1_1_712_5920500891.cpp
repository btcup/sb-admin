//5920500891 Supawit Thongnoi
#include <iostream>
using namespace std;
int main()
{
    int n,a,d,i,sum;
     i=0;
     sum=0;
     cout<<"Enter n,a and d :";
     cin>>n>>a>>d;
     
    if(n>0)
    {
           cout<<"The arithmetic progression of";
           cin>>n>>a>>d;
           cout<<"summation="<<sum;
           sum=(n+a+d);
           }
         
        else if(n<=0) 
           {
           cout<<"The arithmetic progression of"<<"n="<<n<<"a="<<a<<"d="<<d<<endl;
           cin>>n>>a>>d;
           cout<<"n cannot be both a nagative integer and a zero"<<endl;
           cin>>n>>a>>d;
            sum=(n+a+d);
            cout<<"summation="<<sum;
       
           }
          else if(a=0)
          {
           cout<<"The arithmetic progression of"<<"n="<<"a="<<"d="<<endl;
           cin>>n>>a>>d;
           cout<<"n cannot be both a nagative integer and a zero"<<endl;
           cin>>n>>a>>d;
           cout<<"a and d cannot be a zero"<<endl;
           cin>>n>>a>>d;
           cout<<"summation="<<sum;
           sum=n+a+d;
           }
            else 
            {
           cout<<"The arithmetic progression of"<<"n="<<n<<"a="<<a<<"d="<<d<<endl;
           cin>>n>>a>>d;
           cout<<"n cannot be both a nagative integer and a zero"<<endl;
           cin>>n>>a>>d;
           cout<<"a and d cannot be a zero"<<endl;
           cin>>n>>a>>d;
           }
         
 
}          
           
    
           
           
    
