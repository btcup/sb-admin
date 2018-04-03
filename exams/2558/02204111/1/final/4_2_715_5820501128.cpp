#include <iostream>
using namespace std;
int main()
{
    int a[5][4],i,j,sum=0,max=0; float avg=0;
    cout<<"Give the number of passengers of day 1: ";
    for(j=0;j<4;j++)
    {
                    i=0;
                    cin>>a[i][j];
    }
    cout<<endl;
    cout<<"Give the number of passengers of day 2: ";
    for(j=0;j<4;j++)
    {
                    i=1;
                    cin>>a[i][j];
    }
    cout<<endl;
    cout<<"Give the number of passengers of day 3: ";
    for(j=0;j<4;j++)
    {
                    i=2;
                    cin>>a[i][j];
    }
    cout<<endl;
    cout<<"Give the number of passengers of day 4: ";
    for(j=0;j<4;j++)
    {
                    i=3;
                    cin>>a[i][j];
    }
    cout<<endl;
    cout<<"Give the number of passengers of day 5: ";
    for(j=0;j<4;j++)
    {
                    i=4;
                    cin>>a[i][j];
    }
    cout<<endl;
    cout<<"Total passenger for air asia is : ";
    for(i=0;i<5;i++)
    {
                    j=0;
                    sum=sum+a[i][j];
    }
    cout<<sum<<endl;
    cout<<"The average number of passengers for all days and all flights is : ";
    for(i=0;i<5;i++)
    {
                    for(j=0;j<4;j++)
                                    avg=avg+a[i][j];
    }
    cout<<avg/20<<endl;
    cout<<"The largest number of passengers is : ";
    for(i=0;i<5;i++)
    {
                    for(j=0;j<4;j++)
                    {
                                    if(a[i][j]>max) max=a[i][j];
                    }
    }
    cout<<max<<endl;
    
    system("pause");
    return 0;
}
