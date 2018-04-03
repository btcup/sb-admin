#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter N:";
    cin>>x;
    while(x<=0)
    {
    cout<<"Enter N ";
    cin>>x;
    }
    if(x%2!=0||x==2)
    cout<<"The greatest factor of "<<x<<"is"<<x<<"--> prime number"<<endl;
    else if 
    (x%2==0)
    cout<<"The greatest factor of "<<x<<"is"<<x<<endl;
    
 system("pause");
 return 0;   
    
}
