//5920504480 asamaphon fongsieng


#include<iostream>
using namespace std;
int main()
{

int N,M,i,j;
int A[M][N],B[N][M];
 

cout<<"Please input M and N:";
cin>>M>>N;

cout<<"Please input matrix A:";
for(i=0;i<M;i++){

for(j=0;j<N;i++)
{
    cin>>A[i][j];
}
   cout<<endl;
}

cout<<"Please input matrix B:";
for(i=0;i<N;i++){
for(j=0;j<M;i++)
{
    cin>>B[i][j];
}
   cout<<endl;
}
 cout<<"A x B :"<<endl;
  
  system ("pause");
  return 0;
}
  


















