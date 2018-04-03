#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n,a[10][10];
    cout<<"Enter a matrix size : ";
    cin>>n;
    cout<<"Enter matrix values : "<<endl;
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
     cin>>a[i][j];
     {
    if(a[i][j]==a[j][i]&&a[i][j]!=0)
    cout<<"The following matrix is diagonal matrix : "<<endl;
    if(a[i][j]!=a[i][i]&&a[i][j]==0)
    cout<<"The following matrix is not diagonal matrix : "<<endl;
}
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     cout<<a[i][j]<<" ";
     cout<<endl;
     }
    system ("pause");
    return 0;
}
