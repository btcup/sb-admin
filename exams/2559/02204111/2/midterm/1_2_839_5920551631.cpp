#include <iostream>
using namespace std;
int main()
{
 int n,m,i=1;cout<<"Enter N: "; cin>>n;
do{
if(n<0)
{cout<<"Enter N: "; cin>>n;continue;}
else 
{if (n%i!=0)
 {i++;
 continue ;}
 else
 m=i;}
}
while(i<=n);

  cout<<"The greatest factor of "<<n<<" is "<<m;   
     system ("pause");
     return 0;
    }
