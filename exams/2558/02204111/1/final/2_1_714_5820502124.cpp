#include <iostream>
using namespace std;
int main ()
{
    int a ,i,j;
    cout<<"Size of matrix: ";
    cin>>a;
    int b[a][a];
    if (a==1)
    { 
      cout<<"Error!! no sub matrix"<<endl;
    }
    if (a>1)
    {
    cout<<"Value: "<<endl;
    for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Sub-matrix : "<<endl;
    for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            
            cout<<"|"<<b[i][j]<<"|"<<endl;
            if (j<a-1||i<a-1)
            cout<<"-----"<<endl;
            
        }
        
    }
    
    }
    
system ("pause");
return 0;
}
