//5920502878
#include <iostream>
using namespace std;
int main()
{
    int m,n,i,j,;
    cout<<"please input M and N:";
    cin>>m>>n;
    int A[m][n],B[n][m],C[m][m];
    cout<<"please input matrix A:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"please input matrix B:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<endl;
    cout<<"A x B:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            int c=0;
            for(int k=0;k<n;k++)
            {
               c=c+A[i][k]*B[k][j];
            }
            cout<<c<<" ";
           
            
        } 
        cout<<endl;      
        
    }
    
    
system ("pause");
return 0;
}
