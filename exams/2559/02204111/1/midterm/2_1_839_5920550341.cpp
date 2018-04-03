//2_1_839_5920550341.cpp
//5920550341 Daoratcha  Mano

#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
  int n,i;
  double a,r,x;
  
  x = a*pow(r,i);
  cout<<"Enter n, a and r :";
  cin>>n>>a>>r;
  cout<<"The geometric progression of n="<<n<<","<<"a="<<a<<","<<"r="<<r<<endl;
  cout<<"X = a*pow(r,i))"<<endl;
  cout<<"The summation :"<<x<<endl;
  if(a==0.0)
   {
    cout<<"a cannot be a zero"<<endl;
   }
  if(r==0.0)
    {
     cout<<"a cannot be a zero"<<endl;
    }
    if(n==0 || n<=0)
    { 
     cout<<"n cannot be both a negative integer and a zero"<<endl;
    }
  
  system("pause");
  return 0 ;  
}
