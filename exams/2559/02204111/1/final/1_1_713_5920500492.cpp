//5920500492Phattharaphon kaewhpikul
#include<iostream> 
using namespace std;
int main()
{
    int a,b,m,n,i,j;
    cout<<"Please input M and N: ";
    cin>>m>>n;
    int A[m][n];
    cout<<"Please input matrix A: "<<endl;
    for(i=0;i<=m;i++)
    {for(j=1;j<=i;j++)
    {
                      cin>>a;
    }
    }
    int B[n][m];
    cout<<"Please input matrix B: "<<endl;
    for(i=0;i<n;i++)
    {for(j=1;j<=m;j++)
    {
                      cin>>b;
    }
    }
    cout<<"A x B: "<<endl;
system("pause");
return 0;
}
    



