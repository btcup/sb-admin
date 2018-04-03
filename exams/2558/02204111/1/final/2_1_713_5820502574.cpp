#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,m,z,x;
    int A[i][j];
    cout<<"Size of matrix:";
    cin>>m;
    
    
    
    if(m==1)
    {
    cout<<"Error!! no sub matrix"<<endl;        
    }
    else
    {   
    cout<<"value:";
    
    for(i=0;i<m;i++)
    {
         for(j=0;j<m;j++)
        { 
              cin>>A[i][j];
        }
    }
    
    cout<<"Sub-matrix"<<endl;

  for(i=m-1;i>=0;i--)
    {
         for(j=m-1;j>=0;j--)
        { 
        
         cout<<A[i][j]<<endl;                
         
           cout<<"----"<<endl;
         }
        
    }
    
    
    
    
    }
    
system ("pause");
return 0;   
    
}
