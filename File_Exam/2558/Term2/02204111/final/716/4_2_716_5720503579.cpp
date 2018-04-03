#include <iostream>
using namespace std;
int main()
{
    int a[5][4],i,j;
    int sum=0,s=0;
    float ave=0;
    for (j=1;j<=5;j++)
    {
     cout<<"Give the number of passengers of day "<<j<<": ";
     for (i=0;i<4;i++)
     {
         cin>>a[j][i];
         s=s+a[j][i];
     }
     
     sum=sum+a[j][0];     
     ave=(s*1.0)/20.0;    
    }
    
    cout<<endl;
    cout<<"Total passenger for route 101 is : ";
    cout<<sum<<endl;
    cout<<endl;
    cout<<"The average number of passengers for all day and all routes is : ";
    cout<<ave<<"0"<<endl;
    cout<<endl;
    cout<<"The largest number of passengers of Thu is : ";
    if (a[4][0]>a[4][1]&&a[4][0]>a[4][2]&&a[4][0]>a[4][3])
       cout<<a[4][0];
    else if (a[4][1]>a[4][0]&&a[4][1]>a[4][2]&&a[4][1]>a[4][3])
         cout<<a[4][1];
    else if (a[4][2]>a[4][0]&&a[4][2]>a[4][1]&&a[4][2]>a[4][3])
         cout<<a[4][2];
    else 
         cout<<a[4][3];
    cout<<endl;
    
system("pause");
return 0;
}
