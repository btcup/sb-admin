#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int A[i][j],B[i][j];
    
    cout<<"Please input M:";
    cin>>n;
    
    for(i=0;i<n;i++)
    { 
    for(j=i;j<n;j++)
    {
         cout<<"Please input array A:"<<endl;
         cin>>A[i][j];           
     }
     cout<<endl;
     }
     
     
    for(i=0;i<n;i++)
    { 
    for(j=i;j<n;j++)
    {
         cout<<"Please input array B:"<<endl;
         cin>>B[i][j];           
     }
     cout<<endl;
     }
     
     cout<<"Wrong input!!"<<endl;
     cout<<"End prorram."<<endl;
     
     
     
     
     
     
     
    system("pause");
    return 0;
}
