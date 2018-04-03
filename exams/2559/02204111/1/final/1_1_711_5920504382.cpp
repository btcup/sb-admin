//5920504382 Chatchawat Chatwongphun
#include<iostream>
using namespace std;
int main()
{
int M,N,i,j,a,b;

cout<<"Please input M and N: ";
cin>>M>>N;
int A[N][M],B[M][N];

cout<<"Please input matrix A"<<endl;
for(i=0;i<N;i++)
{
  for(j=0;j<M;j++)
  {  cin>>A[i][j];
  }
}
//cout<<A[1][0];
cout<<"Please input matrix B"<<endl;
for(i=0;i<M;i++)
{
  for(j=0;j<N;j++)
  {  cin>>B[i][j];
  }
}
if(A[M]==B[N]){
//cout<<B[1][0];
cout<<"A x B:"<<endl;
for(i=0;i<(M*N)/2;i++)
{  
    for(j=0;j<(M*N)/2;j++)
    {cout<<A[i][i]*B[i][i]+A[i][j]*B[j][i]<<endl;
  }
}

}
system("pause");
return 0;
}
