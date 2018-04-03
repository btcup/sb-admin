#include<iostream>
using namespace std;
int main ()
{
    int n,i;
    float a,d,sum=0,x;
    do
    {
    cout<<"Enter n,a and d : ";
    cin>>n>>a>>d;
          if(n<=0)
          cout<<"n cannot be both a negative integer and zero"<<endl;
            {    
               if(a==0 && d==0)   
               cout<<"a and d  cannot zero"<<endl;
               else if(a==0)
               cout<<"a  cannot zero"<<endl;       
               else if(d==0)
               cout<<"d  cannot zero"<<endl;
            }          
    }
    
    while((a==0 || d==0 )|| n<=0);
    cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<":"<<endl;             
    for(i=0;i<n;i=i+1)
    {
                   
       x=(a+i*d);               
       cout<<x<<" ";
       sum=sum +x;
    }   
    cout<<endl;
    cout<<"The summation:"<<sum<<endl;             
system("pause");
return 0;
}
