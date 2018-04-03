#include <iostream>
using namespace std;
int main()
{
    int a,b,sum1,sum2 ;
    
    cout<<"Enter employee ID and Salary :"<<endl;
    cin>>a>>b;
    while(a>0)
    {
     sum1=a++;
      
    cout<<"Enter employee ID and Salary :"<<endl;
    cin>>a>>b;
    }
    
    
   
    if((b>=15,000)&&(b<=25,000))
   { sum2=b++ ;
   
   }
    
    
    
    cout<<"Number of employee in the company = "<<sum1<<endl;
    cout<<"Number of salaries between 15,000-25,000 bath = "<<sum2<<endl;
    
    
    system ("pause");
    return 0 ;
}
