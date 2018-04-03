#include <iostream>
using namespace std;
int main()
{
    
    long n,;
    cout<<"Plese input number : ";
    cin>>n;
    cout<<endl;
    cout<<endl;
    if (n<=0)
    cout<<"!! Wrong Input !!"<<endl;
    
    else if (n>0&&n%2==0)
    cout<<"Summation of Even number"<<endl;
   
    
    else if (n>0&&n%2==1)
    cout<<"Summation of Odd number"<<endl;
    cout<<endl;
    
    
    
    
system ("pause");
return 0;
}
