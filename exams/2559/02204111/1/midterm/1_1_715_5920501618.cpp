// 5920501618 Pongnaphat Nivate
#include<iostream>
#include<cmath>
using namespace std;
int  main()
{
     int n;
     float a,r,i,x;
     cout<<"Enter n, a and r : ";
     cin>>n>>a>>r;
     
     if (n<=0)
     {
             else if(n==0&&a!=0&&r!=0)
             {cout<<"n cannot be both a negative integer and a zero"<<endl;}
             else if(a==0&&r==0)
             {cout<<"a and r cannot be zeros"<<endl;}
             else if(a==0&&r!=0)
             {cout<<"a cannot be zeros"<<endl;}
             else if(a!=0&&r==0)
             {cout<<"r cannot be zeros"<<endl;}
             //continue;
             //break;
     }
     //continue;
     if(n>0&&a!=0&&r!=0){
     cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
     //(a*pow(r,n-1))=x
     for(i=n;i<=x;n=n-1)
     cout<<x<<" ";   }
     
     
     system("pause");
     return 0;
}
     
     
