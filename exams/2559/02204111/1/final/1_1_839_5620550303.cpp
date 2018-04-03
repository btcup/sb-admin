//5620550303 supitcha undech section 833/839  E03
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int M,N;
    cout<<"Please input M and N: ";
    cin>>M>>N;
    int A[M][N],B[N][M];
    cout<<"Please input matrix A: ";
    for(int i=0;i<M;i++)
    {
            for(int j=0;j<N;j++)
            {
                    cin>>A[i][j];
            }
                    cout<<endl;
    }
    cout<<"Please input matrix B: ";
    for(int i=0;i<N;i++)
    {
            for(int j=0;j<M;j++)
            {
                    cin>>B[i][j];
            }
                    cout<<endl;
    }
    int matrixAxB;
    cout<<"A x B:"<<endl;
    cout<<matrixAxB;
    system("pause");
    return 0;
}
