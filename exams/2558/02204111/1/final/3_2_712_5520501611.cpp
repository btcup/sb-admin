#include<iostream>
using namespace std;
int main()
{
    int a,i,j;
    cout<<"Enter a matrix size:";
    cin>>a;
    int A[a][a];
    cout<<"Enter matrix value"<<endl;
    for(i=0;i<a;i++)
    {
       for(j=0;j<a;j++)
       {
          cin>>A[i][j];
       }
       cout<<endl;
    }
    for(i=0;i<a;i++)
    {
       for(j=0;j<a;j++)
       {
         if(j==i)
         continue;
         if(A[i][j]>0)
         {
                 cout<<"The following matrix is not diagonal matrix:"<<endl;
                 break;
         }
       }
    }
    cout<<"The following matrix is diagonal matrix:"<<endl;
    for(i=0;i<a;i++)
    {
       cout<<"| ";             
       for(j=0;j<a;j++)
       {
           cout<<A[i][j]<<" ";    
       }
       cout<<"|"<<endl;
    }
    cout<<endl;       
     
           
           
    system ("pause");
    return 0;
}
