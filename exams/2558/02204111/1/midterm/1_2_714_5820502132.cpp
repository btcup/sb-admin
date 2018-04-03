#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n,m,i=0,sum=0;
    
    while(1)
    { 
       cout<<"Enter employee ID and Salary:";
       cin>>n>>m;
       if(n<=0)
       break;
       
       sum=sum+i;
       i++;
          
    }
    
    
    cout<<"Number of employers in the company = "<<sum<<endl;
    cout<<"Number of salaries between 15,000 - 25,000 bath ="<<endl;
      
system("pause");
return 0;
}
    
