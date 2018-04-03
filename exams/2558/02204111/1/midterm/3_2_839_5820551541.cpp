#include <iostream>
using namespace std;
int main(){
    long long n;
    int m,a;
    cout<<"please input number: ";
    cin>>n;
    cout<<endl;
    if (n>=0)
     {  if (n%2==0)
       {
               cout<<"Summation of even number"<<endl;
       }
       else if (n%2==1)
       {
               cout<<"Summation of Odd number"<<endl;
               
       }
     } 
    else if (n<0)   
       cout<<"!! Wrong Input !! "<<endl;
      
            
     system ("pause");
    return 0;
}
            
