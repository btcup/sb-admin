//5920501723 sita poonsuk
#include <iostream>
using namespace std;
int main ()
{
int i,y,z,N,A,B,C,D,a,b,c,d;
cout<<"Enter a positive integer : ";
cin>>N;
A=N/1000;
a=A%1000;
B=a/100;
b=B%100;
C=b/10;
c=C%10;
D=c/1;
cout<<endl;
if (N>0)
   {
     if (A!=0)
          cout<<"Number of digit is "<<"4";
     else if (B!=0)
          cout<<"Number of digit is "<<"3";
     else if (C!=0)
           cout<<"Number of digit is "<<"2";
     else if (D!=0)
           cout<<"Number of digit is "<<"1";
           }
else if (N<=0) 
      cout<<"Invalid number !!";   
cout<<"Factor of "<<N<<"are :"<<endl;
for (i=1;y%i==0;i++)
 cout<<i<<"*"<<z<<"="<<y<<endl;
 z=y*i;
system ("pause");
return 0;
}
