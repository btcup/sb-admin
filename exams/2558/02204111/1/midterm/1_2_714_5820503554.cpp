#include<iostream>
using namespace std;
int main()
{
int a,b;
do
{
    cout<<"Enter employee ID and Salary :" ;
    cin>>a>>b;
    if(a<4)
    {
     if(a>0)
     {      
     a=a+1;}
     else if(a==0)
     {
     break;
           }
           }      
    
}
    while(a>0);
    cout<<"Number of employee in the company ="<<a;
    cout<<"Number of salaries between 15,000-25,000 bath =";
  
    system("pause");
    return 0;
}












