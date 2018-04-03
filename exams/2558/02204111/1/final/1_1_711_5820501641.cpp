#include <iostream>
using namespace std;
int main()
{
    int N;
    char type;
    cout<<"Enter N: ";
    cin>>N;
    int a[N][N];
    if(N>0&&N<=9)
    {
                  
                  
             for(int i=0;i<N;i++)
             {
                     for(int j=0;j<N;j++)
                     {
                             cin>>a[i][j];
                             }
            }
            cout<<"Choose(U:Upper,L:Lower,D:Diagonal): ";
            cin>>type;
            if(type=='U')
            {
                         for(int i=0;i<N;i++)
                         {
                                 for(int j=0;j<N;j++)
                                 {
                                         if(i>j)
                                         {
                                                a[i][j]=0;
                                                }
                                         }
                                 }
                          
                          for(int i=0;i<N;i++)
                         {
                                 for(int j=0;j<N;j++)
                                 {
                                         cout<<a[i][j]<<" ";
                                         }
                                 cout<<endl;      
                         }
            }
            if(type=='L')
            {
                         for(int i=0;i<N;i++)
                         {
                                 for(int j=0;j<N;j++)
                                 {
                                         if(i<j)
                                         {
                                                a[i][j]=0;
                                                }
                                         }
                                 }
                          
                          for(int i=0;i<N;i++)
                         {
                                 for(int j=0;j<N;j++)
                                 {
                                         cout<<a[i][j]<<" ";
                                         }
                                 cout<<endl;
                         }
    } 
           if(type=='D')
           {
                        for(int i=0;i<N;i++)
                         {
                                 for(int j=0;j<N;j++)
                                 {
                                         if(i<j||i>j)
                                         {
                                                a[i][j]=0;
                                                }
                                         }
                                 }
                          
                          for(int i=0;i<N;i++)
                         {
                                 for(int j=0;j<N;j++)
                                 {
                                         cout<<a[i][j]<<" ";
                                         }
                                 cout<<endl;
                         }
                        }
    
}
    system("pause");  
    return 0;
      
}
    
    
