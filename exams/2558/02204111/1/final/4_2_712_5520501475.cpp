#include <iostream>
using namespace std;
int main ()
{
    int n,m,i,j,sum;
    int x[5][4];
    cout<<"Give the number of passengers of day 1 : ";
    cin>>x[0][0]>>x[0][1]>>x[0][2]>>x[0][3];
    cout<<"Give the number of passengers of day 2 : ";  
    cin>>x[1][0]>>x[1][1]>>x[1][2]>>x[1][3];
    cout<<"Give the number of passengers of day 3 : ";
    cin>>x[2][0]>>x[2][1]>>x[2][2]>>x[2][3];
    cout<<"Give the number of passengers of day 4 : ";
    cin>>x[3][0]>>x[3][1]>>x[3][2]>>x[3][3];
    cout<<"Give the number of passengers of day 5 : ";
    cin>>x[4][0]>>x[4][1]>>x[4][2]>>x[4][3];
    cout<<"total passenger for air asia is : "<<x[0][0]+x[1][0]+x[2][0]+x[3][0]+x[4][0]<<endl;
    
                 for(i=0;i<4;i++)
                 for(j=0;j<5;j++)
                        {
                    sum=sum+x[i][j];
                    }
    cout<<"the average number of passengers for all days and all flights is : "<<sum/20<<endl;
    cout<<"the largest number of passengers is : "<<endl;
    system ("pause");
    return 0;
}
