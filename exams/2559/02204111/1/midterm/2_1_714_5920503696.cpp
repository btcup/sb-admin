//5920503696 Chakrit Lhamwilai
#include<iostream>
using namespace std;
int main()
{
    float n,a,r,x,sum;
    sum=0;
    cout<<"Enter n, a and r:";
    cin>>n>>a>>r;
    if(n>0&&a!=0&&r!=0){
    cout<<"the geometric progression of n="<<n<<","<<"a="<<a<<","<<"r="<<r<<endl;
               for(x=a;x>=n;x=a*r)
               {  
                  cout<<x<<" "<<endl;
                  sum=sum+x;
                  cout<<"The summation:"<<sum<<endl;
               }
    }
    else if(n<=0||a==0||r==0)
    cout<<"n cannot be both a negative integer and a zero "<<endl;
 system("pause");
 return 0;
}
