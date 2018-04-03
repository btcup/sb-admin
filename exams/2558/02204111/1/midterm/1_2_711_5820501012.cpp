#include<iostream>
using namespace std ;
int main()
{ 
    
    int a,b,i,sum=0;
   
    
    for(a=1;a>0;i++)
    {
    cout<<"Enter employee ID and Salary :";
    cin>>a>>b;
    if(b>=15000&&b<=25000)
    sum=sum+1;
    
    }

    cout<<endl;
    cout<<"Number of employers in the company ="<<a<<endl;
    cout<<"Number of salary between  15000 - 25000 bath ="<<sum<<endl;
system("pause");
return 0;
}
