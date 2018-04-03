#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    int A[9][9];
    char x;
    cout<<"Enter N : ";
    cin>>N;
    for(i=0;i<N;i++)
    {
         for(j=0;j<N;j++)
         {
              cin>>A[i][j];
         }
         cout<<endl;
    }
    cout<<"Choose (U:Upper ,L:Lower ,D:Diagonal) : ";
    cin>>x;
    if(x=='U')
    {
              for(i=0;i<N;i++)
              {
                 for(j=0;j<N;j++)
                 {
                  if(i!=0 && i!=j && j<N-1)
                  A[i][j]=0;
                  cout<<A[i][j]<<" ";
                  }
                  cout<<endl;
              }
              
    }
    else if(x=='L')
    {
              for(i=0;i<N;i++)
              {
                 for(j=0;j<N;j++)
                 {
                  if(i!=N-1 && i!=j && j>0)
                  A[i][j]=0;
                  cout<<A[i][j]<<" ";
                  }
                  cout<<endl;
              }
              
    }
    else
    {
              for(i=0;i<N;i++)
              {
                 for(j=0;j<N;j++)
                 {
                  if(i!=j)
                  A[i][j]=0;
                  cout<<A[i][j]<<" ";
                  }
                  cout<<endl;
              }
              
    }
    system("pause");
    return 0;
}
