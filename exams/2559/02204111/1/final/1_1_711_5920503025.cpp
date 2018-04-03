//5920503025 Maihom vilas
#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,x,y,sum,c=0;
    
    cout<<"Please input M and N ; ";
    cin>>m>>n;
    
    int A[n][m];
    cout<<"Please input matrix A; "<<endl;
                  for(i=0;i<n;i++)
                                  for(j=0;j<m;j++)
                                  cin>>A[n][m];
                                  
    int B[m][n];
    cout<<"Please input matrix b; "<<endl;
                  for(i=0;i<m;i++)
                                  for(j=0;j<n;j++)
                                  cin>>B[m][n];
                                  
    cout<<"A x B ; "<<endl;
    
    
   for(i=0;i<n;i++)
                   for(j=0;j<m;j++)
                                {
                                sum=0;    
                                for(x=0;x<n;x++)
                                                {
                                                    for(y=0;y<m;y++)
                                                                 {c=A[i][j]*B[x][m];
                                                                 sum=sum+c;}
                                                    cout<<sum<<" ";
                                                }
                                cout<<endl;   }   
   system("pause");
    return 0;
}
    
                                                
