//5920552051Siwat Wisarnthamakorn
#include <iostream>
using namespace std;
int main ()
{
    int M,N,i,j;
    cout<<"Please input M and N :";
    cin>>M>>N;
    int A[3][3],B[3][3];
     cout<<"Please input matrix A :"<<endl;
    for(i=0;i<N;i++)
       for(j=0;j<M;j++){
    cin>>A[i][j];}
    cout<<"Please input matrix B :"<<endl;
    for(i=0;i<M;i++)
       for(j=0;j<N;j++){
    cin>>B[i][j];}
    cout<<"A x B :"<<A[i][j]+B[i][j]<<endl;                   
    system ("pause");
    return 0;
}
