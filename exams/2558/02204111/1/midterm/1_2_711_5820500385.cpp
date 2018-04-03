#include <iostream>
using namespace std;
int main ()
{
    int i=0,n,m,max,min,sum=0;
    min=15000;
    max=25000;
    for( ;n>0; )
    {
                     cout<<"Enter employee ID and Salary : ";
                     cin>>n>>m;
                     i=i+(n-1);
                     if(m>=min&&m<=max)
                                       sum=sum+1;
    }
    cout<<endl;
    cout<<"Number of employer in the company = "<<i-1<<endl;
    cout<<"Number of salaries between 15000 - 25000 bath = "<<sum<<endl;
    system("pause");
    return 0;
}

    
