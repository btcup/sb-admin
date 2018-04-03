#include <iostream>
using namespace std;
int main(){
    int n,i,j,pos=0;
    cout<<"Enter a matrix size : ";
    cin>>n;
    int mat[n][n];
    cout<<"Enter matrix values : "<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>mat[i][j];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
    if(i==j)continue;
    if(mat[i][j]!=0)pos++;
    }
    if(pos==0)cout<<"The following matrix is diagonal matrix : "<<endl;
    else if (pos!=0)cout<<"The following matrix is not diagonal matrix : "<<endl;
    for(i=0;i<n;i++){
    cout<<"| ";
    for(j=0;j<n;j++)
    cout<<mat[i][j]<<" ";
    cout<<"|"<<endl;}
    system("pause");
    return 0;
}
