#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Size of matrix: ";
    cin>>n;
    if(n!=1)
    {
    int A[n][n];
    A[n][n]=n;
    cout<<"Value :";
    cin>>A[n][n];
    cout<<"Sub-matrix :"<<endl;
    for(int i=0;i<=n+1;i++)
    {
     cout<<A[n-1][n-1]<<endl;
     cout<<"----"<<endl;
    }
}
    else if(n==1)
    cout<<" "<<endl;
    cout<<"Error!! no sub matrix"<<endl;
    system("pause");
    return 0;
}
