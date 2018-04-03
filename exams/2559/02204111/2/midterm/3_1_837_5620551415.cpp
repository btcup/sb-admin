//5620551415 Nonanan Jongthong
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,x;
    cout<<"Arrival time:";
    cin>>a;
    cout<<"Leave time:";
    cin>>b;
    x=(b-a);

    if(x>0&&x<4)
    cout<<(int(b-a))<<"hours and 10 minutes"<<endl<<"you have to pay 0 bath"<<endl;
    else if(7>x&&x>3)
    cout<<(int(b-a))<<"hours and 45 minutes"<<endl<<"you have to pay 40 bath"<<endl;
    else if(9>x&&x>6)
    cout<<(int(b-a))<<"hours and 15 minutes"<<endl<<"you have to pay 160 bath"<<endl;
    else if(x>8)
    cout<<(int(b-a))<<"hours and 20 minutes"<<endl<<"you have to pay 500 bath"<<endl;
    else
    cout<<"you can't leave before arrival time"<<endl;
    system ("pause");
    return 0;
}
