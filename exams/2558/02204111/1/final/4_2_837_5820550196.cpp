#include<iostream>
using namespace std;
int main ()
{
    int i,j,n,max=2100,sum=0,avg=0,total=0;
    int B[4][5],K[20][20];
    for(i=0;i<5;i++)
    {
      cout<<"Give number of passengers of day "<<i+1<<": ";
      for(j=0;j<4;j++)
      {
        cin>>B[i][j];
        if(B[i][j] <= max)
        { n  = max; }
        total = total + K[i][j];        
      }
    }
    sum = B[0][0]+B[1][0]+B[2][0]+B[3][0]+B[4][0];
    avg = total/20;
    cout<<"Total passenger for air asia is : "<<sum<<endl;
    cout<<"The average number of passengers for all days and all flights is : "<<avg<<endl;
    cout<<"The largest number of passengers is : "<<n<<endl;
    system("pause");
    return 0;
}
