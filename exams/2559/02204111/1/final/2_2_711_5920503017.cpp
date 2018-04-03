#include<iostream>
using namespace std;
int main()
{
    int m,i,j,sum;
    cout<<"Please input your sentence:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
         for(sum=i;sum<=m;sum++)  
         {
          if(sum!=m)
          {
                    cout<<" ";
                    }
                    else{
                         for(j=i;j>=i;j--)
          {
          cout<<j;
         }
          cout<<endl;
     }}}
          system("pause") ;
          return 0;
}                       
    
