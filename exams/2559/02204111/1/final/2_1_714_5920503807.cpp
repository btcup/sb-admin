#include<iostream>
using namespace std;
int main()
{
    int m,i,j;
    string a[m][m],b[m][m];
    cout<<"Please input M:";
    cin>>m;
    cout<<"Please input array A:"<<endl;
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            }
  
    cout<<"Please input array B:"<<endl;
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)       
        {
            cin>>b[i][j];
            }
    
    system("paues");
    return 0;
}            
