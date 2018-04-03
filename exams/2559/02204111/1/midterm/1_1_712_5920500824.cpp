//5920500824 Panuwat soponvanit
#include<iostream>
using namespace std;
int main()
{
    int n;
    double a,d,sum1=0,sum2=0,i=0;
    cout<<"Enter n, a and d:"; cin>> n>>a>>d;//"The arithmetic progression o"
    while (n<=0||a==0||d==0)
    {if (n<=0)
          {cout<<"n cannot be both a negative integer and a zero\n";}
    if (a==0&&d==0)
    {cout<<"a and d cannot be zero\n";}
    else if (a==0)
    {cout<<"a cannot be zero\n";}
    else if (d==0)
    {cout<<"d cannot be zero\n";}
     cout<<"Enter n, a and d:"; cin>> n>>a>>d;}
     cout<<"The arithmetic progression of n="<<n<<", a="<<a<<",d="<<d<<":\n";
     while (i<n)
     {sum1=a+(d*i);
     cout<<sum1<<" ";
     sum2=sum2+sum1;
     i++;      }
           cout<<"\nThe summation:"<<sum2<<endl;
    system ("pause");
    return 0;
}
