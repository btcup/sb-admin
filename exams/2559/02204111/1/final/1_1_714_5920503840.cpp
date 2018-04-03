//5920503840 Mr.Panudate Nak-aumka
#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,z;
    int A[m][n],B[n][m];
    cout<<"Please input M and N:";
    cin>>m>>n;
    cout<<"Please input matrix A:"<<endl;
    for(i=1;i<=m;i++)  
    {
       for(j=1;j<=n;j++)
       cin>>A[m][n];   
    }
    cout<<"Please input matrix B:"<<endl;
    for(i=1;i<=m;i++)  
    {
       for(j=1;j<=n;j++)
       cin>>B[n][m];   
    }
    cout<<"A x B:"<<endl;
    system("pause");
    return 0;
}
