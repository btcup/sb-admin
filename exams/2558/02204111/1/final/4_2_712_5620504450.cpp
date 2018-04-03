#include<iostream>
using namespace std;
int main()
{
    int m=4,n=5,i;
    int a[m][n];
    cout<<"Give the number of passengers of day 1";
    
    i=0;
    for(i=0;i<m;i++)
    {
                    for(j=0;j<m;j++)
                    {
                    cin>>a[i][j];
                    }
    }
    system("pause");
    return 0;
}
