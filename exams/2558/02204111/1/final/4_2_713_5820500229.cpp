#include <iostream>
using namespace std;


int main()

{
    double aver=0;
    int sum=0,max=0;
  int a[4][5],i,j;
   cout<<"Give the number of passengers of day 1:";             
 for(i=0;i<4;i++)
  {
   cin>>a[i][0];
  }  
     
  cout<<"Give the number of passengers of day 2:";
   for(i=0;i<4;i++)
  {
   cin>>a[i][1];
  }  
  
  cout<<"Give the number of passengers of day 3:";
   for(i=0;i<4;i++)
  {
   cin>>a[i][2];
  }  
  cout<<"Give the number of passengers of day 4:";
   for(i=0;i<4;i++)
  {
   cin>>a[i][3];
  }  
  cout<<"Give the number of passengers of day 5:";
   for(i=0;i<4;i++)
  {
   cin>>a[i][4];
  }  

 for(j=0;j<5;j++)
 sum+=a[0][j];
cout<< "Total passenger for air asia is :"<<sum<<endl;

for(i=0;i<4;i++)
for(j=0;j<5;j++)
{
     aver+=a[i][j];
  }
cout<< "Thr average number of passengers for all day and all flights is:"<<aver/20<<endl;

for(i=0;i<4;i++)
for(j=0;j<5;j++)
{
   if(a[i][j]>max)
   max=a[i][j]; 
  }
cout<<"The largest number of passengers is:"<<max;
cout<<endl;
   system ("pause");
   return 0; 
}
