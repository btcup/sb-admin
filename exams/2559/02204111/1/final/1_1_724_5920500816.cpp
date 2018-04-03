#include<iostream>
using namespace std;
int main()
{
 int m,n,i,j,v;
 cout<<"Plese input M and N :"<<" ";
 cin>>m>>n;
 int a[m][n],b[n][m];
 cout<<"Please input matrix A :"<<endl;
 for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++) 
      cin>>a[i][j];          
    }cout<<"Please input matrix B :"<<endl;
 for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++) 
      cin>>b[i][j];          
    }
  for(i=1;i<n;i++)
    {
    for(j=0;j<m;j++) 
    v=(a[i][j]*b[j][i])+(a[i][j]*b[j][i]) ;       
    }
  cout<<"A x B:";
  cout<<endl;
 system("pause");
 return 0;
}
