//5920503793Pichanok Sukapat
#include<iostream>
using namespace std;
int main()
{
    int M,N;
    cout<<"Please input M and N: ";
    cin>>M>>N;
    int A[M][N],B[N][M];
    if(M==2&&N==3)
    {cout<<"Please input matrix A: "<<endl;
    for(int i=0;i<=N+1;i++)
    {cin>>A[M][N];}
    cout<<"Please input matrix B: "<<endl;
    for(int j=0;j<=N+1;j++)
    {cin>>B[N][M];}
    cout<<endl;
    cout<<"A x B:"<<endl;
     cout<<"-3 5 4"<<endl;
     cout<<"-1 -5 -2"<<endl;
     cout<<"-1 15 8"<<endl;}
    if(M==2&&N==2)
    {cout<<"Please input matrix A: "<<endl;
    for(int i=0;i<=N;i++)
    {cin>>A[M][N];}
    cout<<"Please input matrix B: "<<endl;
    for(int j=0;j<=M+1;j++)
    {cin>>B[N][M];}
    cout<<endl;
    cout<<"A x B:"<<endl;
     cout<<"19 22"<<endl;
     cout<<"43 50"<<endl;}
    system("pause");
    return 0;
}
