#include<iostream>
using namespace std;
int main()
{
    int N;
cout<<"Enter N:";
cin>>N;
char U,L,D;
cout<<"Choose(U:Upper,L:Loewr,D:Diagonal):";
cin>>U;
int a,b;
for(a=0;a<=5;a++)
{
  for(b=0;b<=5;b++)
  cout<<"*";
  cout<<endl;
}
int i,j;
for(i=0;i<3;i++)
{
  for(j=0;j<=i;j++)
  cout<<"0";
  cout<<endl;
}
int k,l;
for(k=0;k<4;k++)
{
  for(l=0;l<=k;l++)
  cout<<"0";
  cout<<endl;
}

 system ("pause");
 return 0;   
}
