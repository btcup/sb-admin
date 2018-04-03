#include <iostream>
using namespace std;
int main()
{
    int i,j,x;
    double A[x][x];
    cout<<"Enter a matrix size:";
    cin>>x;
    cout<<"Enter matrix values:"<<endl;
    for(i=0;i<x;i++)
       for(j=0;j<x;j++)
       {
           cin>>A[i][j];
       }
       for(i=0;i<x;i++)
       for(j=0;j<x;j++)
       {
          if(i==j&&A[i][j]!=0)
          {
          cout<<"The following matrix is diagonal matrix:"<<A[i][j]<<endl;
          }
       }
     cout<<endl;
      
     system ("pause");
    return 0;
}
  
