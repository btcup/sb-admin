//5820550471 Sele surattasaranee
#include <iostream>
using namespace std;
int main()
{int x,y;
cout<<"Enter a positive integer : ";
cin>>x;
cout<<endl;
if(x<=0)
{cout<<"Invalid number!! "<<endl;}
if(x<10&&x>0)
 {cout<<"Number of digit is 1 "<<endl;
 }
if(x>=10&&x<100)
 {cout<<"Number of digit is 2 "<<endl;}
if(x>=100&&x<1000)
 {cout<<"Number of digit is 3 "<<endl;}
 if(x>=1000&&x<10000)
 {cout<<"Number of digit is 4 "<<endl;}
  if(x>=10000&&x<100000)
 {cout<<"Number of digit is 5 "<<endl;}
  if(x>=100000&&x<1000000)
 {cout<<"Number of digit is 6 "<<endl;}
   if(x>1000000)
 {cout<<"Number of digit is 7 "<<endl;}

cout<<"Factor of "<<x<<" are :"<<endl;
y=1;
while(y<=x)
{if(x%y==0)
 {cout<<y<<" * "<<x/y<<" = "<<x<<endl;}
y++;}

  system("pause");
        return 0; }


