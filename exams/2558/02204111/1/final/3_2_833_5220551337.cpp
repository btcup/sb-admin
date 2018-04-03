#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter a matrix size :";
    cin>>n;
    int a[n][n];
    int i=0,j=0;
    cout<<"Enter matrix values :"<<endl;
    while(i<n)
    {
              
              j=0;
              while(j<n)
              {
              cin>>a[i][j];
              j++;
             
              }
              i++;
    }
    i=0;
    cout<<"The following matrix is not daigonal matrix :"<<endl;
    while(i<n)
    {
   
             
             j=0;
              while(j<n)
              {
              
              cout<<a[i][j]<<" ";
              
              j++;
             
              }
              cout<<endl;
              i++;
              }      
        
 
 
 
 
 
 
 system ("pause");
    return 0;
}
