#include <iostream>
using namespace std;
int main()
{
    int A,i,j;
    cout<<"Size of matrix: ";
    cin>>A;
    cout<<"Value:"<<endl;
    int B[A][A];
    for(i=0;i<A;i++)
    {
         for(j=0;j<A;j++)
         {
             cin>>B[i][j];
         }        
    }
    
    cout<<endl;
    system("pause");
    return 0;
}

