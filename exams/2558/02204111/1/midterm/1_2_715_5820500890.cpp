#include<iostream>
using namespace std;
int main()
{
    int a,b,i=0,j=0;
    do
    {
          cout<<"Enter employee ID and Salary : ";
          cin>>a>>b;
          i++;
          if (b<=25000&&b>=15000)
          {j++;
          }
    }
    while(a>0);
    cout<<endl;
    cout<<"Number of employers in the company = "<<i-1<<endl;
    cout<<"Number of salaries between 15,000-25,000 baht = "<<j<<endl;
    
    system("pause");
    return 0;
}
