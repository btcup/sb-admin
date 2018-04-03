//5920503602
#include <iostream>
using namespace std;
int main ()
{
    int N,a; 
    cout<<"Enter N :";
    cin>>N;
    while(N<=0)
    {
    cout<<"Enter N :";
    cin>>N;
    if(N%a==0)
              {
              a++;  
              }
              if(a==N)
              {
              cout<<"The greatest factor of"<<N<<" is "<<a<<"--> prime number"<<endl;
              }
    }
    cout<<"The greatest factor of"<<N<<" is "<<""<<a<<""<<endl;
system ("pause");
return 0;
}
           
    
   
    
