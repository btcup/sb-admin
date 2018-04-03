#include<iostream>
#include<cmath>
using namespace std;
int main()
{int N,sum,y;
int x;
x=1;
y=0;
sum=0;

cout<<"Enter an integer: ";
cin>>N;
cout<<"Number of digit is ";
while(N/x>0)
{y=y+1;
x=pow(10.0,y);}
cout<<y<<endl;


system("pause");
return 0;
}
