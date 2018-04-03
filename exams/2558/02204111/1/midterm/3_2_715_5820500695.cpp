#include <iostream>
using namespace std;
int main ()
{
    long long n, i;
    cout<< "Please input number: ";
    cin>> n;  
    cout<<endl;
    if (n<0)
    cout<< "!! Wrong Input !! \n";
    else if (n%2!=0)
    {
        cout<< "Summation of Odd number\n\n";
        cout<< n << " = "<<n <<endl;        
    }
    else if (n%2==0)
    {
         cout<< "Summation of Even number\n\n";
         cout<< n << " = "<<n <<endl;
    }
       
    system ("pause");
    return 0;
}
