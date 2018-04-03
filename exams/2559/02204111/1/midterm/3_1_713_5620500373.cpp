#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    do
    {
    cout<<"input value:";
    cin>>x;            
    if(x<0)
    break;
    else if(x>=10)
    cout<<"Invalid Input !! Try Again"<<endl;
    }while(1);
system ("pause");
return 0;
}

