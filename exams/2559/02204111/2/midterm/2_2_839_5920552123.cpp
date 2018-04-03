#include <iostream>        \\5920552123 Intauch  Danpan
#include <cmath>
using namespace std;
int main()
{
   int a,n=0,sum;
   int num1,num2,num3,num4,num5,num6;
   cout<<"Enter an integer:"; cin>>a;
   if (a/1!=0)
      n++;
   if (a/10!=0)
      n++;
   if (a/100!=0)
      n++;
   if (a/1000!=0)
      n++;   
   if (a/10000!=0)
      n++; 
   if (a/100000!=0)
      n++;
   cout<<"Number of digit is "<<n<<endl;   
      num1=a/1%10;
      num2=a/10%10;
      num3=a/100%10;
      num4=a/1000%10;
      num5=a/10000%10;
      num6=a/100000%10;
    sum=(pow(num1,n))+(pow(num2,n))+(pow(num3,n))+(pow(num4,n))+(pow(num5,n))+pow((num6,n));
    if (sum==a)
    cout<<a<<" is a target number."<<endl;
    else
    cout<<a<<" is not target number."<<endl;   
    system ("pause");
    return 0;
}

