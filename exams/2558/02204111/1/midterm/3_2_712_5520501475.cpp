#include <iostream>
using namespace std;
int main ()
{
    long long n,sum;

    cout<<"Please input number : ";
    cin>>n;
    
    if (n%2==0&&n>=0)
    {
       cout<<"Summation of Even number "<<endl;
       cout<<n<<" = "<<n<<endl;   
    } 
    else if (n%2!=0&&n>=0)
    {
       cout<<"Summation of Odd number "<<endl; 
       cout<<n<<" = "<<n<<endl;   
    }
    else if (n<0)
    {
       cout<<"! ! Wrong Input ! !"<<endl;  
    } 
    cout<<endl;     
    system ("pause");
    return 0;
}
