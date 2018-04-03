#include<iostream>
using namespace std;
int main()
{   
    int a,b,c,d,e,f,g ;
    cin>>a;
    cout<<"Enter a matrix size:"<<a<<endl;
    int A[a][a];
    cout<<"Enter matrix values:"<<endl;
    cin>>b,c,d,e,f,g;
    cout<<"The following matrix is diagonal matrix:"<<endl;
    cout<<A[a][a]<<endl;
   
    system("pause");
    return 0 ;
}
