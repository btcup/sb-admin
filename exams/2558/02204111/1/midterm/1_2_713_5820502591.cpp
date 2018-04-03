#include <iostream>
using namespace std;
int main ()
{int salary,ID,num,n;

for(ID=1;ID<=n;ID++)
{ 
  cout<<"Enter employee ID and Salary:";  
  cin>>ID>>salary;
  
  if(ID<=0)
    {
       cout<<"Number of employers in the company ="<<ID<<endl ;break;
    }

  if(salary>15000&&salary<=25000)
    cout<<"Number of salaries between 15,000-25,000 bath:"<<ID<<endl;


}     





    
    
    
    system("pause");
    return 0;
    }
