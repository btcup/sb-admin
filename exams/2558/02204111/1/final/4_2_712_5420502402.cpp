#include<iostream>
using namespace std;

int main()
{
   int a,b,c,d,sum=0,avg,max;
   cout<<"Give the number of passengers of day 1:";
   cin>>a>>b>>c>>d;
   cout<<"Give the number of passengers of day 2:";
   cin>>a>>b>>c>>d;
   cout<<"Give the number of passengers of day 3:";
   cin>>a>>b>>c>>d;
   cout<<"Give the number of passengers of day 4:";
   cin>>a>>b>>c>>d;
   cout<<"Give the number of passengers of day 5:";
   cin>>a>>b>>c>>d;
   sum=sum+a;
   cout<<"Total passenger for air asia is:"<<sum<<endl;
   avg=(a+b+c+d)/2;
   cout<<"THe average number of passengers for all days and all flights is :"<<avg<<endl;
   cout<<"The largest number of passengers is :";
   system ("puase");   
    return 0;
}
