#include<iostream>                                  //5920501065NatchiraDindaeng
using namespace std;
int main()
{
    int n,factor;
    cout<<"Enter N: ";
    cin>>n;
    if(n>0)
    {

           cout<<"The greatest factor of "<<n<<" is "<<factor<<endl;
    }
    else
    {
        cout<<"Enter N: ";
        cin>>n;
    }
    system ("pause");
    return 0;   
}
