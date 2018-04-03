#include <iostream>
using namespace std;
int main()
{
    int a , i , sum=0 ,bet;
    for(i=1 ; i>0 ; i++)
    {
             cout<<"Enter employee ID and Salary : ";
              cin>>i>>a;
               sum = sum+i;
               bet = bet+a;
               if (a=0)
               {
            
            cout<<"Number of employers in the company : "<<sum<<endl;
            cout<<"Number of salaries between 15,000 - 25,000 bath = "<<bet<<endl;
            
            }
            else if (a>=15000&&a<=25000)
            {
                 cout<<"Number of employers in the company : "<<sum<<endl;
                 cout<<"Number of salaries between 15,000 - 25,000 bath = "<<bet<<endl;
                 }    
    
            }
    
   
    
system ("pause");
return 0;    
}
