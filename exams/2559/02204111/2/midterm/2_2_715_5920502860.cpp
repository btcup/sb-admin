#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int x,n,i,e=0;
float z,w=0;
int a=10,b=1;

cout<<"Enter an integer: ";
cin>>x;
cout<<"Number of digit is  ";
cin>>n;

for(i=0;i<n;i++)
 {z=(x%a)/b;
  a=a*10;
  b=b*10 ;
  w=(pow(z,n));
  e=e+w;
 }

if(e==x)
cout<<x<<" is a target number"<<endl;
else
cout<<x<<" is not target number"<<endl;
    
system("pause");
return 0;    
}

