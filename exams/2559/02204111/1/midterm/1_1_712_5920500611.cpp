#include <iostream>
#include <cmath>
using namespace std;
int main()
{ float a,b,d,n,i;
  cout<<"Enter n, a and d:";
  cin>>n>>a>>d;
  if(n>0)
  {
         if(a>0&&d>0)
  cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<":";
  }
   else if (n<=0)
   {
   cout<<"n cannot be both a negative integer and a zero"<<endl;
   }
   else if (n<=0&&a==0&&d==0){
   cout<<"n cannot be both a negative integer and a zero"<<endl;
   cout<<"a and d cannot be zeros"<<endl;
}
   
   
  
  system ("pause");
return 0;
}
