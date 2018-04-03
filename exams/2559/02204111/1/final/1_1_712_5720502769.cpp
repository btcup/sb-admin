//5720502769 farid damaroh
#include<iostream>
using namespace std;
int main()
{
    int f,j,i,N,M;
 
    cout<<"Please input M and N:";
    cin>>M>>N;
    int B[M],A[N];
    cout<<"Please input matrix A:"<<endl;
     for(int i=0;i<M;i++)
      {
      for(int j=0;j<N;j++)
      cin>>A[i];
      }
    
     cout<<"Please input matrix B:"<<endl;  
     for(int i=0;i<N;i++)
     {
      for(int j=0;j<M;j++)
      cin>>B[i];
      }
      
   for(int i=0;i<M;i++)
      {
      for(int j=0;j<N;j++)
      A[i];
      }
   for(int i=0;i<N;i++)
     {
      for(int j=0;j<M;j++)
      B[i];
      }  

    cout<<"A X B:"<<endl;
    cout<<A[i]*B[i]<<endl;
    
    
    
    
    system("pause");
    return 0;
}
    
