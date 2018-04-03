#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int a,i=0,b,c=0;
do
{ cout<<"Enter employee ID and Salary :";
  cin>>a>>b;
  if(a==0)
  break;
  if(b>=15000&&b<=25000)
   c=c+1;  
   i=i+1;
}   while(1);
 cout<<"Number of employers in the company ="<<i<<endl;
 cout<<"Number of salaries between 15000-25000 bath ="<<c<<endl;
system("pause");
return 0;
}
