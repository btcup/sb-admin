//5520551901 sumeth nareepapjaroen

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
 int n;
 double a,r,x,i;
 n>0;
 cout<< "Enter n,a and r:"; 

 do
 {      
  if(a!=0||r!=0)
  x=pow(r,i)*a;
  cout<< "The geometric progression of"<<"n="<<n<<",a="<<a<<",r="<<r<<endl;
  cin>>x;
 }
  while(n<0||a==0||r==0)
 { 
  cout<< "n cannot be both a negative integer and a zero";
  cout<< "a and r cannotbe zero"<<endl;
 } 
  cout<< "The summation:";
  
system ("pause");
return 0;
}
