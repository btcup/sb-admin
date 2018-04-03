#include<iostream>
using namespace std;
int main()
{int x,y,i=0;
do{ 
     cout<<"Enter employee ID and Salary :";
     cin>>x>>y;
     i++;
     }while(x!=0&&y!=0);
     cout<<"Number of employers in the company :"<<(i-1)<<endl;
     if(y>=15000&&y<=25000)
     {cout<<"Number of salsaries between 15,000-25,000 bath ="<<x<<endl;}
system("pause");
return 0;
}
