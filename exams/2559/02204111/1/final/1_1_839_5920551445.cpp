//5920551445 Thanasin Wettayavigromrat
#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Please input M and N: ";
    cin>>m>>n;
    int a[n][m];
    int b[m][n];
    cout<<"Please input matrix A:"<<endl;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<m;j++)
                    {
                                    cin>>a[i][j];
                                    }
                                    }
    cout<<"Please input matrix B:"<<endl;
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cin>>b[i][j];
                                    }
                                    }
                         
    cout<<endl;
    cout<<"A x B:"<<endl;
    if(n>m){
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cout<<a[i][0]*b[0][j]+a[i][1]*b[1][j]<<" ";
                                    }
                                    cout<<endl;
                                    }
                                    }
    else{
         for(i=0;i<m;i++)
    {
                    for(j=0;j<m;j++)
                    {
                                    cout<<a[i][0]*b[0][j]+a[i][1]*b[1][j]<<" ";
                                    }
                                    cout<<endl;
                                    }
                                    }
    system("pause");
    return 0;}
 

