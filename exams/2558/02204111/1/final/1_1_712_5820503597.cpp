#include<iostream>
using namespace std;
int main()
{
    int n,m;
    char z;
    cout<<"Enter N : ";
    cin>>n;
    int A[n][n],i,j;
    
    for(i=0;i<n;i=i+1)
    {
      for(j=0;j<n;j=j+1)
      {
      cin>>A[i][j];
      }
    }
    cout<<"Chose(U:Upper,L:Lower,D:Diagonal): ";
    cin>>z;
    
    if(z=='L')
    {
       for(i=0;i<n;i=i+1)
      {
      for(j=0;j<n;j=j+1)
      {
       if(i<j)
       A[i][j]=0;                 
      cout<<A[i][j]<<" ";
       }
      cout<<endl;
      }
    }
    
    if(z=='D')
    {
       for(i=0;i<n;i=i+1)
      {
      for(j=0;j<n;j=j+1)
      {
      if(A[i][j]!=A[i][i])
       A[i][j]= 0;
      cout<<A[i][j]<<" ";
       }
      cout<<endl;
      }
    }
      
    if(z=='U')
    {
       for(i=0;i<n;i=i+1)
      {
      for(j=0;j<n;j=j+1)
      {     
      if(i>j)
      A[i][j]=0;                            
      cout<<A[i][j]<<" ";
       }
      cout<<endl;
      }
    }
    
    system("pause");
    return 0;
    
}
 
