#include <iostream>
using namespace std;
int main()
{
   int N,i,j;
    char ch,U,L,D;
    cout<<"Enter N : ";
    cin>>N;
    while(N<=9)
    {
    int a[N][N];
    for(i=0;i<N;i++){
       for(j=0;j<N;j++)
       cin>>a[i][j];
       }
    cout<<"Choose(U:Upper,L:Lower,D:Diagonal) : ";
    cin>>ch;
    if(ch=='U')
    {
             for(i=0;i<N;i++){
             for(j=0;j<N;j++)
                if(i>0&&i<N&&j>=0&&j<i)
                {
                a[i][j]=0;
                }
             }
            for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                cout<<a[i][j]<<" ";
                }  
             cout<<endl;
             }
    }
    if(ch=='L')
    {
               for(i=0;i<N;i++){
               for(j=0;j<N;j++)
                if(j>0&&j<N&&i>=0&&i<j)
                {
                a[i][j]=0;
                }
             }
            for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                cout<<a[i][j]<<" ";
                }  
             cout<<endl;
             }
    }
    if(ch=='D')
    {
             for(i=0;i<N;i++){
             for(j=0;j<N;j++)
                if(i!=j)
                {
                a[i][j]=0;
                }
             }
            for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                cout<<a[i][j]<<" ";
                }  
             cout<<endl;
             }
    }
    }          
    system("pause");
    return 0;
} 
