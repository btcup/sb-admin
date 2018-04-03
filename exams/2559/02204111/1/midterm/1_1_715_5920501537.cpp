// 5920501537 Thanot Wasuntararat

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    double a,d,x,sum=0;
    do
    {
          cout<<"Enter n, a and d : ";
          cin>>n>>a>>d;
          if(n<=0&&a==0&&d==0)
          {cout<<"n cannot be both a negative integer and a zero"<<endl;
          cout<<"a and d cannot be a zero"<<endl;}
          else if(n<=0)cout<<"n cannot be both a negative integer and a zero"<<endl;
          else if(a==0)cout<<"a cannot be a zero"<<endl;
          else if(d==0)cout<<"d cannot be a zero"<<endl;
          else
          {cout<<"The arithmetic pro gression of n="<<n<<", a="<<a<<", d="<<d<<" :"<<endl;
          for(i=0;i<=(n-1);i++)
          {
                               x=a+i*d;
                               cout<<x<<"  ";
                               sum=sum+x;
                               }cout<<endl<<"The summation : "<<sum<<endl;}
                               }while(n<=0||a==0||d==0);
                               system("pause");
                               return 0;
                               }
