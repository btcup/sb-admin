#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Size of matrix: ";
    cin>>n;
    int A[n][n];
    
    if(n<=1)
    {
       cout<<"Error!! no sub matrix"<<endl;
    }
    else
    {
        cout<<"Value: "<<endl;
        for(i=1;i<=n;i++)
        {
           for(j=1;j<=n;j++)
           {
              cin>>A[i][j]; 
           }
        }
        cout<<endl;
        cout<<"Sub-matrix: "<<endl;
        for(i=1;i<=n;i++)
        {
           for(j=n;j>0;j--)
           {
             cout<<"|"<<A[i][j-2]<<"|"<<endl;
             cout<<"----"<<endl;
           }    
        }
    }
    system("pause");
    return 0;
}
