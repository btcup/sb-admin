#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y,i=1;
    while(i<x)
    {
    cout<<"Enter decimal number : ";
    cin>>x;
    if(x<-1)
    {
           break;
           }
    cout<<"Enter base (2-9): ";
    cin>>y;
    cout<<x<<"b10 is ""b"<<y<<endl;
     i++;
    }
   

system("pause");
return 0;
}


