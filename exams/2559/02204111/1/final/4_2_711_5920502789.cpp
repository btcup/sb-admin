//5920502789  Narumon  Chongklang

#include<iostream>
using namespace std;

void graph(int s)
{
     int i,j,n,m,b,a;
    int A[n][m];

    if(s==1)
    {
      a=b/10;
     
         for(int k=0;k<a;k++)
         {
              cout<<"o";
         }  
    }
}

int main()
{
    
  int i,j,n,m,s,b;
    int A[n][m];
    cout<<"Number of student : ";
    cin>>n;
    cout<<"Number of subject : ";
    cin>>m;
      
    for(i=0;i<n;i++)
     {
         cout<<"score of student "<<i+1<<": ";
         for(j=0;j<m;j++)
         {   
              cin>>A[i][j];
              b=A[i][j];
         }
         cout<<endl;     
     }
      
    cout<<"Select graph (1-score,2-max,3-exit):";
    cin>>s;
    graph(s);

     
     system("pause");
     return 0;
}
