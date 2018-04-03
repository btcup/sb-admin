#include <iostream> //5920500239 Siriphong Sirakunwat
using namespace std;
int main ()
{
    long n,m,o,p;
   do
    {
         cout<<"Enter N:";
         cin>>n;
         p=n;
         for (m=2;m<=n;m++)
             {
               if (n%m==0)
                   n=n/m;
               if (m>o)
               o=m;
             }
    }while (n<1);
    if (o==p)
           cout<<"The greatest factor of "<<p<<" is "<<o<<"--> prime number"<<endl;
           else
           cout<<"The greatest factor of "<<p<<" is "<<o<<endl;
    
    system ("pause");
    return 0;
}
