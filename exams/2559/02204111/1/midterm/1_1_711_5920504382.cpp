#include<iostream> //5920504382 Chatchawat Chatwongphun 
#include<cmath>
using namespace std;
int main()
{
    float n,a,d,i,x,sum;
    sum=0;
while(1)
{  cout<<"Enter n,a and d: ";
    cin>>n>>a>>d;
   if(n==0&&a==0&&d==0)
           { cout<<"n cannot be both a negative integer and zero"<<endl; 
             cout<<"a and d cannot be a zero"<<endl;}
   else if(n<0&&a==0&&d==0)
           { cout<<"n cannot be both a negative integer and zero"<<endl; 
             cout<<"a and d cannot be a zero"<<endl;}
   else if(n==0||n<0&&a!=0&&a!=0)
           { cout<<"n cannot be both a negative integer and zero"<<endl; 
             /*continue;*/}
   else if(a==0)
           { cout<<"a cannot be a zero"<<endl; 
            /* continue;*/}
   else if(d==0)
           { cout<<"d cannot be a zero"<<endl; 
             /*continue;*/}
   
   else if(n>0&&a!=0&&d!=0)
          { cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<":"<<endl; 
               for(i=0;i<n;i++)
                  { x = a+i*d;
                     cout<<x;
                     if(i<n)
                     {cout<<" ";}
                     sum+=x;
                  }
               cout<<endl;
               cout<<"The summation:"<<sum<<endl;
               break;
               }
}
system("pause");
return 0;
}
