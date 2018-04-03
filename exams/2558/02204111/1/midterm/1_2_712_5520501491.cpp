#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ID,salary,Numpeople=0,Numsalary=0;
    do
    {
    cout<<"Enter employee ID and Salary : ";
    cin>>ID>>salary;
    Numpeople++;
                if(ID==0&&salary==0)
                break;
                      if(salary>=15000&&salary<=25000)
                      Numsalary++;
                      
    }
    while(ID!=0&&salary!=0);
    
    cout<<endl;
    
    cout<<"Number of employers in the company = " <<Numpeople-1<<endl ;
    cout<<"Number of salaries between 15,000 - 25,000 bath = "<<Numsalary<<endl;
    
    
    
    system("pause");
    return 0;
    
}
