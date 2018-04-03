#include<iostream>
using namespace std;
int main()
{
int x;
int n[9][9];
char y;
cout<<"Enter N:";
cin>>x;
cout<<n[x][x]<<endl;

cout<<"Choose(U:Upper,L:lower,D:diagonal):";
cin>>y;
if(y=='d')
cout<<n[x][x];
else if(y=='u')
cout<<n[x][x];
else if(y=='l')
cout<<n[x][x];
system("pause");
return 0;
}
