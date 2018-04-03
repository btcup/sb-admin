#include <iostream>
using namespace std;
int main()
{
    int id,salary,count=0,i=0;
    do{
          cout<<"Enter employee ID and Salary : ";
          cin>>id>>salary;
          if(salary>=15000&&salary<=25000)
                 count++;    
          i++;                     
    }while(id>0);
    cout<<"Number of employers in the company = "<<i-1<<endl;
    cout<<"Number of salaries between 15,000 - 25,000 bath = "<<count<<endl;
    system("pause");
    return 0;
    
}
