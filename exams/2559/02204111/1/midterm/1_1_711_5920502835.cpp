// 5920502835 Peeratut Porncharoenmusikul


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,i,d,x,r,n;


cout<<"Enter n, a and d: ";
cin>>n>>a>>d;



if((n>=0)&&(a!=0)&&(d!=0))
{
cout<<"The arithmetic progression of n = "<<n<<" a = "<<a<<" d = "<<d<<endl;
for(i=1;i<n+1;i++)
{cout<<a<<" ";
a=a+d;}
}


else 
{cout<<"n cannot be both a negative integer and zero"<<endl;
 continue;
}


system("pause");
return 0;
}
