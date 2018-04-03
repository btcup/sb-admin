//5920500697 Name Narongrit Lastname Tawai
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n,i=0;
 float a,r,sum=0,x=0;
 while(1)
 {
 cout<<"Enter n, a and r: ";
 cin>>n>>a>>r;
 if(n>0&&a!=0&&r!=0)
      {
                   cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
                    while(i<n)
                    {
                    x = a*pow(r,i);
                    sum = sum+x;
                    cout<<x<<" ";
                    i++;
                    }
                    cout<<"\nThe summation:"<<sum<<endl;
                     
                    break;     
      }
 if (n<1){cout<<"n cannot be both a negative integer and a zero"<<endl;}
 if (a==0&&r!=0){cout<<"a cannot be zero"<<endl;}
 if (a!=0&&r==0){cout<<"r cannot be zero"<<endl;}
 if (a==0&&r==0){cout<<"a and r cannot be zeros"<<endl;}
 }
                    system("pause");
                    return 0;
}
