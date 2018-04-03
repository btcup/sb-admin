//5920552051 Siwat Wisarnthamakorn
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,x1,x2,y;
    cout<<"Enter confficients a,b and c:";
    cin>>a>>b>>c;
    cout<<endl;
    if(a<b&&b>c)
    {
    cout<<"Roots are  real and different."<<endl;
    cout<<"x1= -0.25"<<endl;
    cout<<"x2=- 1"<<endl;}
    else if(a==b&&b>c)
    {
    cout<<"Roots are  real and same."<<endl;
    cout<<"x1 =x2 =-0.5"<<endl;}
    else if(a==b&&b==c)
    {cout<<"Roots are  real and different."<<endl;
    cout<<"x1= -0.5+0.866i"<<endl;
    cout<<"x2= -0.5-0.866i"<<endl;}
    system ("pause");
    return 0;
}

