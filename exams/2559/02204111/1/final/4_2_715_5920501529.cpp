#include<iostream>
using namespace std;
int main()
{
  int x,y,s;
  int t;
  cout<<"Number of student : ";
  cin>>x;
  cout<<"Number of subject : ";
  cin>>y;   
  for(int i=1;i<=x;i++)
  {
   cout<<"score of student "<<i<<" :";
   for(int i=0;i<=y;i++)
   {
     if(i==y)break;
     cin>>t;
   }
   
  }
  cout<<"Select graph (1-score,2-max,3-exit) : ";
  cin>>s;
  cout<<endl;
  if(s==1)
  {
     cout<<"Student1"<<endl;
  }
  
  
  
  
  system("pause");
  return 0;    
}
