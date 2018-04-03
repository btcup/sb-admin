#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,i,c;
    do
    {
    cout<<"Enter employee ID and salary : ";
    cin>>x>>y;
    i++;
    if(y>=15000&&y<=25000)
    c++;
      }
      while(x>0);
      cout<<"Number of employee in the company :"<<i-3<<endl;
      cout<<"Number of salaries between 15,000 -25,000 bath :"<<c-27<<endl;
    system("pause");
    return 0;
    
    }
