#include<iostream>
#include<cmath>;
using namespace std;
int main()
{
    int i=0,n,m,sum=0;
    
    cout<<"Enter employee ID and Salary : ";
    cin>>n>>m;
    
    while(n>0 && m>0)
    {
      if(m>=15000&&m<=25000)
      {
                            sum=sum+1;
      }
      
      
      i=i+1;
      
    cout<<"Enter employee ID and Salary : ";
    cin>>n>>m;
              
    }
    cout<<"Number of employers in the company ="<<i<<endl;
    cout<<"Number of salaries between 15000-25000 bath = "<<sum<<endl;
    
    
    
    system("pause");
    return 0;
    
}
