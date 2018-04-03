#include<iostream>
using namespace std;
int main()
{
    int i,j,m,A[m][m];
    char a;
    cout<<"Enter N:";
    cin>>m;
    i=0;
    while(i<m)
    {
              j=0;
              while(j<m)
              {
              cin>>A[i][j];
              j=j+1;
              }
              i=i+1;
    }
    cout<<"Choose(U:Upper,L:Lower,D:Diagonal):";
    cin>>a;
    if(a=='U')
        cout<<A[i][j-1];
        cout<<endl;
    cout<<"U:Upper,L:Lower,D:Diagonal):";
    cin>>a;
    if(a=='L')
        cout<<A[i-1][j];
        cout<<endl;
    cout<<"U:Upper,L:Lower,D:Diagonal):";
    cin>>a;
    if(a=='D')
    {
              for(i=0;i<m;i++)
              {
              for(j=0;j<m;j++)
              {
                if(i==j)
                cout<<A[i][j];
                else
                cout<<"0";              
}}}

    system("pause");
    return 0;
}
    
    
