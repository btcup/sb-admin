#include <iostream> // sittipong wongchang
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter electricity cost per unit (bath) :";
    cin>>a;
    cout<<"Enter last unit:";
    cin>>b;
    cout<<"Enter current unit :";
    cin>>c;
    if(b>c&&b<0)
    cout<<"Invalid current unit!"<<endl;
    else
