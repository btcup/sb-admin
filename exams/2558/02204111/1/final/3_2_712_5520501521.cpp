#include <iostream>
using namespace std;
int main()
{
    int n,i,j ,A[n][n];
    cout<<"Enter a matrix size: ";
    cin>>n;  
    cout<<"Enter matrix valuse:"<<endl;
    cin>>A[n][n];
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                       cout<<A[i][j];
        }
    }
                       {
                        if(i==j||A[i][j]!=0)
                        cout<<"The following matrix is  diagonal matrix"<<endl;
                        cout<<"| "<<A[n][n]<<" |"<<endl;
                        else 
                        cout<<"The following matrix is not diagonal matrix"<<endl;
                        cout<<"| "<<A[n][n]<<" |"<<endl; 
               }               
               
    system ("pause");
    return 0;
}
