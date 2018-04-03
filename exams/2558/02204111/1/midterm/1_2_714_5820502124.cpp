#include <iostream>
using namespace std;
int main ()
{
    int id,s,x=0,i=0;
    while (1)
    {
          cout<<"Enter employee ID and Salary : ";
          cin>>id>>s;
          if (s>=15000&&s<=25000)
          {
             x++;
          }
          if (id==0&&s==0)
          {
          break;
          }
    i++;
    }
    cout<<"Number of employers in the company = "<<i<<endl;
    cout<<"Number of salaries between 15,000 - 25,000 bath = "<<x<<endl;
system ("pause");
return 0;
}
