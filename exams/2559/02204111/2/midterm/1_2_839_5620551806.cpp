5620551806 Suppawat Whanseng
#include <iostream>
using namespace std;
int main() 
{
    int m=2,n;
    
    do
    {
       cout<<"Enter N : ";
       cin>>n;
       if (n<=0)
       continue;     
       else
       {
           if (n%2==0)
           m++;
           else
           m=n;
       }
       
     cout<<"The greatest factor of "<<n<<"is"<<m<<endl;
     break;
    }               
    while (true);
    
    system ("pause");
    return 0;
}
