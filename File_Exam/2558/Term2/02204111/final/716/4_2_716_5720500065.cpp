#include<iostream>
using namespace std;
int main(){
int i,j;
float sum=0,a[5][4],avg,b=a[3][0];
for(i=0;i<5;i++)
{cout<<"Give the number of passengers of day "<<i+1<<": ";
for(j=0;j<4;j++)
{cin>>a[i][j];}
cout<<endl;
}
for(i=0;i<5;i++)
{sum=sum+a[i][0];}
cout<<"Total passenger for route 101 is : "<<sum<<endl;
for(i=0;i<4;i++)
{
{for(j=0;j<5;j++)
sum=sum+a[i][j];}
}
avg=sum/20;
cout<<"The average number of passengers for all days and all routes is : "<<avg<<endl;
for(j=0;j<4;j++)
{a[3][j];
if(b>=a[3][j])b;
else if(b<a[3][j])b=a[3][j];}
cout<<"The largest number of passengers of Thu is : "<<b<<endl;
system("pause");
return 0;
}
