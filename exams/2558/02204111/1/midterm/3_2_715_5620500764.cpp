#include <iostream>
using namespace std;
int main()
{
    long x;
    int n;
    cout<<"Please input number: ";
    cin>>x;
    if(x>0)
    {
           cout<<"Summation of Even number\n";
           if(x%2==0)
           {
                     cout<<x<<endl;
           }
           else if(x%2==1)
           {
                     cout<<x<<endl;
           }
           
    }
    else if(x<0)
    {
         cout<<"!! Wrong Input !!\n";
    }
    
    
    
    
    
    
    
    
system("pause");
return 0;    
}
