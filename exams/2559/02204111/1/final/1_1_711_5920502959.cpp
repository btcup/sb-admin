#include <iostream>
using namespace std;
int main()
{
    int M,N,i,j;
    cout<<"Plaease input M and N:";
    cin>>M>>N;
    int x[N][M],y[N][M],sum[N][N];
    cout<<"please input matrix A:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>x[i][j];
        }
    }
    cout<<"please input matrix B:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>x[i][j];
        }
    }
    cout<<endl;
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
        sum[i][j]=x[i][j]*y[i][j]+x[i][j]*y[j][i];
        }
    }
    cout<<"A*B: "<<endl;
     for (i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
        cout<<sum[i][j]<<" ";
        }
    }
    system ("pause");
return 0;
}
    
    
