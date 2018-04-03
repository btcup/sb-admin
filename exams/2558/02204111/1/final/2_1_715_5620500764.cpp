#include <iostream>
using namespace std;
int main()
{
    
    int i,m,j,x;
    int a[x][x];
    cout<<"Size of matrix : ";
    cin>>m;
           if(m>1)
           {
                  cout<<"Value : "<<endl;
                  for(i=0;i<m;i++)
                  {
                                   for(j=0;j<m;j++)
                                   {
                                                     cin>>a[x][x];
                                                     
                                   }
                  }
           cout<<"Sub-matrix :"<<endl;
           for(i=0;i<m;i++)
                  {
                                   for(j=0;j<m;j++)
                                   {
                                    cout<<" |"<<a[x][x]<<"| "<<endl;
                                    cout<<"-----\n";
                                        }
                   }      
           }
           else
           {
               cout<<"Error!! no sub matrix\n";
           }
    
    
    
    
    
    
system("pause");
return 0;
}
    
