#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    char c;
    cout<<"Enter N: ";
    cin>>N;
    int m[N][N];
    if(N<=9)
    for( i=0;i<N;i++)
            for( j=0;j<N;j++)
            cin>>m[i][j];
            cout<<endl;
    cout<<"Choose(U:Upper,L:Lower,D:Digonal): ";
    cin>>c;
    if(c=='U')
    {       for(i=0;i<N;i++)
            { for(j=0;j<N;j++)
             {m[i+1][i]=0;m[N-1][0]=0;
              cout<<m[i][j]<<" ";
              }
              cout<<endl;}              
            }  
    if(c=='L')
    {              for(i=0;i<N;i++)
            { for(j=0;j<N;j++)
             {m[i][j+1]=0;m[0][N-1]=0;
              cout<<m[i][j]<<" ";
              }
              cout<<endl;}        
     }       
    if(c=='D')
    {       for(i=0;i<N;i++)
            { for(j=0;j<N;j++)
            if(i!=j){m[i][j]=0;}
            
              cout<<m[i][i]<<" ";
              
              cout<<endl;}              
   }                       
    system("pause");
    return 0;        
}    

