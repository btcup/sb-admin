#include <iostream>
using namespace std;
int main ()
{
    int n,x,a ;
    
    cout<<" Enter N: " ;
    cin>>n;
    while(n<0)
    {
              cout<<" Enter N: " ;
             cin>>n;
}
x=1;
    
    while(n%x==0)
    x++;
    
     while((n%x)!=0 && n%n==1)
      x++;
    
     
      while(n%x==1)
      cout<<"The greatest factor of "<< n << " is " << x <<  "-- > prime number " ;
     
      
     
   cout<<" The greatest facetor of "<< n << "is " << x-1 << endl;
    system ("pause");
    return 0;
    }
