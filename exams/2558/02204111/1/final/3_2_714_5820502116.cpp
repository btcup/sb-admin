#include <iostream>
using namespace std;
int main()
{
    int m,n,i=0,j=0;
    int A[n][m];
     cout<<"Enter a matrix size:";
     cin>>m;
    
     for(i=0;i<n;i++)
     {
       for(j=0;j<i;j++)
       {
          cin>>A[i][j];
          }
          }
         cout<<"Enter matrix values:"<<A[i][j];
         system("pause");
         return 0;
         }
    
