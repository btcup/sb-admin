#include<iostream>
using namespace std;

int main()
{
    int x;

           
    cout<<"Size of matrix:";
    cin>>x;
    
    if(x==1)
    cout<<"Error!! no sub matrix\n";
    
    else 
    {
    cout<<"Value :\n";
    int a[x][x];
    for(int i=0;i<x;i++)
    {
            for(int j=0;j<x;j++)
            cin>>a[i][j];
            }
            
    cout<<"\nSub-matrix :\n";
    for(int n=0;n<x;n++)
    {
         for(int m=0;m<x;m++)
         {
                 cout<<"|"<<a[n][m]<<"|"<<endl;
                 if(m<x)
                 cout<<"----\n";
         
                 
                
         }
        
         }
    }
            
                 
    
    
    
    
    
    
    
    system("pause");
    return 0;
    }
