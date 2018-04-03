#include <iostream>
using namespace std;
int main ()
{
 int i,m,n,sum=0;
 for(i=1;i>0;i++)
 {
 cout<<"Enter employee ID and Salary : ";
 cin>>n>>m;
 if(n<=0)
 break;
 if(m>=15000&&m<=25000)
 sum=sum+1;
 }
 cout<<endl;
 cout<<"Number of employers in the company = "<<i-1<<endl;
 cout<<"Number of salaries between 15,000-25,000 bath = "<<sum<<endl;
system("pause");
return 0;

}
