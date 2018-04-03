#include <iostream>
using namespace std;
int main()
{
    long long n,i,sum;
    cout<<"Please input number :";
    cin>>n;
    if(n>i-2)
    {
             
           cout<<"Summation of Even number"<<endl;
           cout<<i<<"+"<<i<<"="<<sum<<endl;
           sum=sum+i;
           } 
           
    if(!n==i-1)
    {
    cout<<"Summation of Odd number"<<endl;
   cout<<i<<"+"<<i<<"="<<sum<<endl;
   sum=sum+i;
   }
    if(n>1)
   {
         cout<<"Summation of Odd number"<<endl;
         cout<<n<<"="<<n<<endl;
         } 
    
    if(n<0)
    {
    cout<<"!! Wrong Input !!"<<endl;
    }
           
           system("pause");
           return 0;
           }
