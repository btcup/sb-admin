#include <iostream>
using namespace std;
int main ()
{
    int i,x,y;
    do
    {
      cout <<"Enter employee ID and Salary : ";
      cin>>x>>y;
    }
      while (x!=0&&y!=0);
    if (x==0&&y==0)
      cout <<"Number of employers in the company = "<<endl;
    if (y>=15000&&y<=25000)
      cout <<"Number of salaries between 15,000-25,000 bath = "<<endl;
system ("pause");
return 0;
}
      
