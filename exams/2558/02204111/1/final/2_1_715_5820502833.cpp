#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Size of matrix: ";
    cin>>n;
    if(n>1)
    {
    cout<<"value: \n";
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];     
    cout<<"Sub-matrix : \n";
    
    }
    else
    cout<<"\nError!! no sub matrix \n";
    system("pause");
    return 0;
}
