#include<iostream>
using namespace std;
int main()
{
   long long n;
   int sum=0;
   
   cout<<"Please input number: ";  cin>>n;
   
   if(n<0) cout<<"!! Wrong Input !!"<<endl;
   
   else if(n%2==0)
    {        
      cout<<"Summation of Even number"<<endl;
        do
         {
          cout<<n%10;
          sum=sum+(n%10);
         do
          {
            n=n/10 ;         
          }
         while(n%2!=0); 
         if(n>0) 
           cout<<" + "; 
         }
               
        while(n>0);
      cout<<" = "<<sum<<endl;                             
    }
    
   else
    {        
      cout<<"Summation of odd number"<<endl;
        do
         {
          cout<<n%10;
          sum=sum+(n%10);
         do
          {
            n=n/10 ;         
          }
         while(n%2==0); 
         if(n>0) 
           cout<<" + "; 
         }
               
        while(n>0);
      cout<<" = "<<sum<<endl;                             
    }
         
 system ("pause");
 return 0;   
}
