#include <iostream>
using namespace std;
int main()
{
    int n,s,num=0,baht=0;
    cout<<"Enter employee ID and Salary : ";
    cin>>n>>s;
    for(;n>0;)
    {
              if(s>=15000&&s<=25000)
              baht=baht+1;
              num=n;
              cout<<"Enter employee ID and Salary : ";
              cin>>n>>s;
    }
    cout<<endl;
    cout<<"Number of employee in the company = "<<num<<endl;
    cout<<"Number of salaries between 15,000 - 25,000 baht = "<<baht<<endl;
    system("pause");
    return 0;
}
              
              
