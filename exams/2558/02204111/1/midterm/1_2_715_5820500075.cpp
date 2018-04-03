#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,i=0,a=0;
    cout<<"Enter employee ID and Salary : ";
    cin>>x>>y;
    do
    {
          if(y>=15000&&y<=25000)
          {
          a++;
          cout<<"Enter employee ID and Salary : ";
          cin>>x>>y;
          }
          else 
          {
          cout<<"Enter employee ID and Salary : ";
          cin>>x>>y;
          }
          i++;
    }
    while (x!=0||y!=0);
    cout<<" "<<endl;
    cout<<"Number of employers in the company = "<<i<<endl;
    cout<<"Number of salart\ies between 15,000 - 25,000 bath = "<<a<<endl;
    system("pause");
    return 0;
}

    
