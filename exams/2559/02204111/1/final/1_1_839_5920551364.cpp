//5920551364 chittavon chaisatapakorn
#include <iostream>
using namespace std;
int main ()
{
    int M,N,j,k;
    cout<<"Please input M,N :";
    cin>>M>>N;
    int A[M][N],B[N][M];
    cout<<"Please input matrix A :"<<endl;
    for(j=1;j<=N;j++)
    {
                     for(k=1;k<=M;k++)
                     {
                                      cin>>A[j][k];
                                      cout<<" ";
                     }
    cout<<endl;
    }
    cout<<"Please input matrix B :"<<endl;
     for(j=1;j<=M;j++)
    {
                     for(k=1;k<=N;k++)
                     {
                                      cin>>B[k][j];
                                      cout<<" ";
                     }
    cout<<endl;
    }
    cout<<"AxB :"<<endl;
     for(j=1;j<=N;j++)
    {
                     for(k=1;k<=N;k++)
                     {
                                      cout<< (A[j][k]*B[j][j])+(A[j][k]*B[j][k]);
                                      cout<<" ";
                                      
                     }
    cout<<endl;
    }
system ("pause");
return 0;
}
