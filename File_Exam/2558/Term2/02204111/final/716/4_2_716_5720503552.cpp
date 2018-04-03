#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,a[i][j],sum,m;
    float avg;
    for(i=0;i<5;i++)
    {
                    cout<<"Give the number of passengers of day "<<(i+1)<<": ";
                    for(j=0;j<4;j++)
                    {
                                    cin>>a[i][j];
                    }
    }                
    for(i=0;i<4;i++)
    {
                    sum=sum+a[i][0];            
    }   
    cout<<"Total passenger for route 101 is : "<<sum<<endl;
    for(i=0;i<5;i++)
    {
                    for(j=0;j<4;j++)
                    {
                                    avg=avg+a[i][j];
                    }
    } 
    cout<<"The average number of passengers for all days  and all routes is : "<<(avg/20)<<endl;
    m=a[3][0];
    for(j=1;j<4;j++)
    {
                    if (m<a[3][j])
                    m=a[3][j];
    }
    cout<<"The largest number of passenger of Thu is : "<<m<<endl;
    system("pause");
    return 0;
}
