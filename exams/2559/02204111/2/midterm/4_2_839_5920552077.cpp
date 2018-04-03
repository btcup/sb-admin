//5920552077thanapat wattanabunsiri
#include<iostream>
using namespace std;
int main()
{
    int a,n,m,i,c,d;
    c=1,d=n;
    a=1,i=-1;
    cout<<"Enter a positive integer :";cin>>n;
    while(m!=0)
    {
               m=n/a;
               a=a*10;
               i=i+1;
               }
    cout<<"Number of digit is"<<i<<endl;
    cout<<"Factor of "<<n<<" are:"<<endl;
    while(c<d)
    {
         if(d%c==0)
         {cout<<c<<"*"<<d<<"="<<n<<endl;
         
         c=c+1;d=d/c;}
         else{
              c=c+1;
         continue;}
         }
          
               
    
    system("pause");
    return 0;
    }
