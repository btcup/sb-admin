#include <iostream>
using namespace std;
int main()
{
    int ID,salary,sumn=0,money=0;
    
    
    
    do
    {
    
       cout<<"Enter employee ID and Salary : ";
       cin>>ID>>salary;
       if (ID>0)
       {
         sumn++;
       }  
       
       if(salary>=15000&&salary<=25000)
       {
         money++;                             
       }
    } 
    while(ID>0);
    
    
    
    cout<<"Number of employers in the company = "<<sumn<<endl;
    cout<<"Number of salaries between 15,000 - 25,000 baht =  "<<money<<endl;
    
    
    
      
    
    
    
    
    
    
system("pause");
return 0;
}    
    
   
