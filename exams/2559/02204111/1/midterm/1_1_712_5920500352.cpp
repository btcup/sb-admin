//5920500325 Thatpong Suttiwara
#include<iostream>
using namespace std;
int main()
{
    int n;
    float a,d,x,y,sum;
    y=1;
    sum=0;
    
    cout<<"Enter n, a and d : ";
    cin>>n>>a>>d;
   
   while(n<=0)
    {
              if(a>0)
              {
                     cout<<"n cannot be both a negative integer and a zero"<<endl;
                     cout<<"Enter n, a and d : ";
                     cin>>n>>a>>d;
              }
              else
              {
                     cout<<"n cannot be both a negative integer and a zero"<<endl;
                     cout<<"a and b cannot be zeros"<<endl;
                     cout<<"Enter n, a and d : ";
                     cin>>n>>a>>d;
                     }
}

    while(a==0)
    {
               cout<<"a cannot be zero"<<endl;
               cout<<"Enter n, a and d : ";
               cin>>n>>a>>d;
               }
    while(d==0)
    {
               cout<<"d cannot be zero"<<endl;
               cout<<"Enter n, a and d : ";
               cin>>n>>a>>d;
               }
               
cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<" :"<<endl;
 
while(y<=n)
{
          cout<<a<<endl;
          sum=sum+a;
          a=a+d;
           y++;
        }
 cout<<"The summation : "<<sum<<endl;
system("pause");


return 0;
}
