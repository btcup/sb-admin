#include<iostream>
using namespace std;
int main()
{
 int n,i,j;
 char c;
 int A[10][10];
 cout<<"Enter N:";
 cin>>n;
if(n<=9)
{
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
  cin>>A[i][j];
  }
  cout<<endl;
 }
 cout<<"Choose(U:Upper,L:Lower,D:Diagonal):";
 cin>>c;
 if(c=='u'|| c=='U')
 {
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
  cout<<A[i][j]<<" ";
  }
  cout<<endl;
 }      
 }
 else if(c=='l' || c=='L')
 {
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
  cout<<A[i][j]<<" ";
  }
  cout<<endl;
 }      
      
 }
 else if(c=='d' || c=='D')
 {
  for(i=0;i<n;i++)
  {
  cout<<A[i][i]<<" "<<endl;
  }
 
 }          

}
system("pause");
}
