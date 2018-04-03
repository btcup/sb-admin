#include<iostream>

using namespace std;

int main()
{
 int M,N,x;

 for(;;)
 {
 cout<<"Enter M and N : ";
 cin>>M>>N;
  if(M<2||M>15||N<2||N>15){cout<<"Error.Please input M and N between 2-15."<<endl;continue;}
  else break;
  }   
   int a[N][M];
  cout<<"Enter initial number : ";
  cin>>x;
   cout<<endl<<endl;
  for(int i=0;i<N;i++)
  {
          for(int j=0;j<M;j++,x++)
          {
                  a[i][j]=x;
                  cout<<x<<' ';
                  
          }
          cout<<endl;        
  }
  cout<<endl<<endl;
   for(int i=0;i<N;i++)
  {
          for(int j=0;j<M;j++,x++)
          {
                  if(a[i][j]==1||a[i][j]==2||a[i][j]==3)continue;
                  else if(a[i][j]%1||a[i][j]%2==0||a[i][j]%3==0&&a[i][j]%a[i][j]==0)
                  {cout<<a[i][j]<<' ';}
                  else continue;
          }
          cout<<endl;        
  }
                  
      
  
  system("pause");
  return 0;
}
