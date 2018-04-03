#include <iostream>
using namespace std;
int main()
{
    int x,i,j,A[i][j];
    cout<<"Size of matrix : ";
    cin>>x;
    if(x<=1) cout<<"Error!! no sub matrix"<<endl;
    else
    {
    cout<<"Value : ";
    for(i=1;i<=x;i++)
    {
     for(j=1;j<=x;j++)
     cin>>A[i][j];
     cout<<endl;
    }
    
    cout<<"Sub-matrix : ";
    if(x=2)
    {
     cout<<"|"<<A[2][2]<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<A[2][1]<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<A[1][2]<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<A[1][1]<<"|"<<endl;
     cout<<"-----"<<endl;
    }
    else if(x=3)
    {
    cout<<"|"<<A[2][2]<<A[2][3]"|"<<endl;
    cout<<"|"<<A[3][2]<<A[3][3]"|"<<endl;
    cout<<"-----"<<endl;
    cout<<"|"<<A[2][1]<<A[2][3]"|"<<endl;
    cout<<"|"<<A[3][1]<<A[3][3]"|"<<endl;
    cout<<"-----"<<endl;
    cout<<"|"<<A[2][1]<<A[2][2]"|"<<endl;
    cout<<"|"<<A[3][1]<<A[3][2]"|"<<endl;
    cout<<"-----"<<endl;
    cout<<"|"<<A[1][2]<<A[1][3]"|"<<endl;
    cout<<"|"<<A[3][2]<<A[3][3]"|"<<endl;
    cout<<"-----"<<endl;
    cout<<"|"<<A[1][1]<<A[1][3]"|"<<endl;
    cout<<"|"<<A[3][1]<<A[3][3]"|"<<endl;
    cout<<"-----"<<endl;
    cout<<"|"<<A[1][1]<<A[1][2]"|"<<endl;
    cout<<"|"<<A[3][1]<<A[3][2]"|"<<endl;
    cout<<"-----"<<endl;
    cout<<"|"<<A[1][2]<<A[1][3]"|"<<endl;
    cout<<"|"<<A[2][2]<<A[2][3]"|"<<endl;
    cout<<"-----"<<endl;
    cout<<"|"<<A[1][1]<<A[1][3]"|"<<endl;
    cout<<"|"<<A[2][1]<<A[2][3]"|"<<endl;
    cout<<"-----"<<endl;
    cout<<"|"<<A[1][1]<<A[1][2]"|"<<endl;
    cout<<"|"<<A[2][1]<<A[2][2]"|"<<endl;
    cout<<"-----"<<endl;
    }
    system("pause");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    }
}
