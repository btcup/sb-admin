#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    int e[n][n];
    cout<<"Enter a matrix size";
    cin>>n;
    cout<<"Enter matrix values :";
  
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cin>>e[i][j];
                    }
    cout<<endl;
    }
    
    cout<<"The following matrix is diagonal matrix";
    system("pause");
    return 0;
    
}
                    

