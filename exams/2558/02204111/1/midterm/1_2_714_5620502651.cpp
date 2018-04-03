#include<iostream>
using namespace std;
int main()
{
    int a,b ;
    cout<<"Enter employee ID and Salary :"<<"  ";
    cin>>a>>b;
    a=1;
    while(a>0)
    {
              cout<<"Enter employee ID and Salary :"<<" ";
              cin>>a>>b;
              a++;        
    
         
    }    
    if(a<=0)
    {
              cout<<"Number of employee in the company = "<<a;
              cout<<"Number of salaries between 15,000-25,000 bath =";
    } 
    system("pause");
    return 0;
}
