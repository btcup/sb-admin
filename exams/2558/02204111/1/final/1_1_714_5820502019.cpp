#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    cout<<"Enter N: ";
    cin>>N;
    int B[N][N];
    for(i=0;i<=N-1;i++)
    for(j=0;j<=N-1;j++)
    cin>>B[i][j];
    char A;
    cout<<"Choose(U:Upper,L:Lower,D:Diagonal) :";
    cin>>A;
    if(A=='U')
    {
              for(i=1;i<=N-2;i++)
              
              for(j=0;j<=N-1;j++)
              {
              B[i][j]=0;
              cout<<B[i][j];
              
              }
              cout<<endl;
                     
    }
    else if(A=='L')
    {
         cout<<"1";
    }
    
    system("pause");
}
    
