#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Size of matrix:";
    cin>>n;
    if(n>1)
    {
    cout<<"Value:"<<endl;
    int A[n][n];
    for(int i=0;i<n;i++)
          for(int j=0;j<n;j++)
    cin>>A[i][j];  
    for(i=n-1;i>0;i--)
     for(j=n-1;j>0;j--)
    cout<<"Sub-matrix :";
    cout<<"|"<<A[i][j]<<"|";
    cout<<endl;
    }
    else
 cout<<"Error!! no sub matrix"<<endl;

system("pause");
return 0;
}
