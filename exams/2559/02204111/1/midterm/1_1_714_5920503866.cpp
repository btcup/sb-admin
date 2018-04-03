//5920503866 Laddawan Ngiwdee
#include<iostream>

using namespace std;
int main()
{
    float n, a, d, i, sum, x;
    cout<<"Enter n, a and d : ";
    cin>>n>>a>>d;
    while(n<=0||a==0||d==0)
        {
                          if(n<=0)
                             cout<<"n cannot be both a negative integer and a zero"<<endl;
                          if(a==0&&d!=0)
                             cout<<"a cannot be zero"<<endl;
                          if(d==0&&a!=0)
                             cout<<"d cannot be zero"<<endl;
                          if(a==0&&d==0)
                             cout<<"a and d cannot be zero"<<endl;
                          cout<<"Enter n, a and d : ";
                          cin>>n>>a>>d;
                          }
    cout<<"The artithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<endl;
    for(i=0;i<n;i=i+1)
       {x=a+i*d;
       sum=sum+x;
       cout<<x<<" ";
       }
    cout<<"\nThe summation : "<<sum<<endl;
                          
system("pause");
return 0;
}
