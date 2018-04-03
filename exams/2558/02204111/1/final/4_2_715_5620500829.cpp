#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,a[m=5][n=4];
    i=0;
    while(i<m)
    {
              j=0;
              cout<<"Give the number of passengers of day "<<i+1<<": ";
              while(j<m)
              {
                        cin>>a  [i][j];
                        j=j+1;
              }
              i=i+1;
    }
    cout<<endl;
    cout<<"Total passenger for air asia is: "<<endl;
    cout<<endl;
    cout<<"The average number of passengers for all days and all flights is: "<<endl;
    cout<<endl;
    cout<<"the largest number of passengers is: "<<endl;
    system("pause");
    return 0;
}
    
    
