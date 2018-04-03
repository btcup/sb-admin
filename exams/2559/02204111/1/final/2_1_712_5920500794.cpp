//5920500794 Photchara khanthong
#include<iostream>
using namespace std;
int main()
{
    int i,j,m,c=0;
    float x;
    cout<<"Please input M:";
    cin>>m;
    int arA[m][m],arB[m][m];
    cout<<"Please input array A:"<<endl;
    for(i=0;i<m;i++)
    {
           for(j=0;j<m;j++)
           cin>>arA[i][j];         
    }
     cout<<"Please input array B:"<<endl;
    for(i=0;i<m;i++)
    {
           for(j=0;j<m;j++)
           cin>>arB[i][j];         
    }
    for(i=0;i<m;i++)
    {
           for(j=0;j<m;j++)
           {
               if(arA[i][j]==arB[i][j])
               c=c+1;     
           }
    }
    
       x=100.0/c;
       cout<<endl;
      cout<<"Similarity of A and B is: "<<x<<"%"<<endl;
    
 system("pause");
 return 0;   
}
