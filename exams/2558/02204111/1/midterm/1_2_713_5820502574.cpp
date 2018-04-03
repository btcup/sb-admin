#include <iostream>
using namespace std;
int main()
{
    int i,num,a,salar;
    
    num=0;
    for(i=1;i>0;i++)
    
    {
          cout<<"Enter  employee ID and Salary :";
           cin>>i>>salar;
        if(i==0 && salar==0 )
          {
           break;
           }   
        
        
        if(salar>=15000 && salar<=25000)
        {
        num=num+1;                
         }
   
       a=i; 
    
    }
   
     cout<<"Number of employers in the company ="<<a<<endl;
     cout<<"Number of salaries beetween 15,000 - 25,000 bath ="<<num<<endl;
    
    
    system ("pause");
    return 0;
    
}
