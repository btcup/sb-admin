#include <iostream>
using namespace std;
int main()
{
    int i,j,M,N;
    int A[M][N],B[N][M];
    cout<<"Please input M and N : ";
    cin>>M>>N;
    cout<<"Please input matrix A : ";
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
             cin>>A[i][j];
    }
    cout<<"Please input matrix B : ";
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
             cin>>B[i][j];
    }
    cout<<"A x B :";
    
    system("pause");
    return 0;
}
