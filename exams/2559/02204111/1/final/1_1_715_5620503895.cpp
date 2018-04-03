//5620503895 Phutthaphong Phongsukwetckun
#include <iostream>
using namespace std;
int main()
{
    int i,j,M,N,n,m,;
    cout<<"Please input M and N: "; cin>>M>>N;
    m=M;
    n=N;
    int A[M][N];
    int B[n][m];
    int X[M][m];
    int Y[M][m];
    int Z[M][m];
    cout<<"Please input matrix A: "<<endl;
    for(i=0;i<M;i++)
    {
                    for(j=0;j<N;j++)
                    cin>>A[i][j];
    }
    cout<<"Please input matrix B: "<<endl;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<m;j++)
                    cin>>B[i][j];
    }
    //calculator
             for(i=0;i<M;i++)
             {
             for(j=0;j<m;j++)
             X[i][j]=A[j][i]*B[i][j];
             }
                    for(i=1;i<M;i++)
                    {
                    for(j=0;j<m;j++)
                    Y[i][j]=A[i][j]*B[i][j];
                    }

    
    cout<<"A * B: "<<endl;
    for(i=0;i<M;i++)
    {
    for(j=0;j<m;j++)
    {
    Z[i][j]=X[i][j]+Y[i][j];
    cout<<Z[i][j]<<" ";
    }
    cout<<endl;
    }
       
system ("pause");
return 0;   
}
