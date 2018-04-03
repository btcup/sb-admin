#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    int A[100][100];
    cout<<"Size of matrix: ";
    cin>>n;
    if(n>1)
{
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       cin>>A[i][j];
    }
    cout<<"Value : "<<endl;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       cout<<A[i][j]<<" ";
       cout<<endl;
    }

    cout<<"Sub-matrix : "<<endl;
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-1;j++)
       cout<<A[i][j]<<" ";
       cout<<endl;
    }
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-1;j++)
       cout<<A[i][j]<<" ";
       cout<<endl;
    }
}
    else
    cout<<"Error!! no sub matrix"<<endl;
    system ("pause");
    return 0;
}
    
