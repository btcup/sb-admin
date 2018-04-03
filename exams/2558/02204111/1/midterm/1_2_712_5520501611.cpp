#include<iostream>
using namespace std;
int main ()
{
    int i,j,k=0,x=0;
    cout<<"Enter employee ID and Salary :";
    cin>>i>>j;
    if(i<=0)
            {
            system ("pause");
            return 0;
            }
    if(i>0)
          {
                   
          
                   do
                   {
                   if(j>=15000&&j<=25000)
                   {
                   k++; 
                   }
                   
                   
                   x++;
                   cout<<"Enter employee ID and Salary :";
                   cin>>i>>j;
                   }
                   while(i>0);
                   
            }       
    
                   
          cout<< "Number of employers inthe company = "<<x<<endl;
          cout<< "Number of salaries between 15,00-25,00 bath = "<<k<<endl;
          system ("pause");
         return 0;
         }
                            
          
    
