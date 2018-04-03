//Miss Kamonchanok Adisorn 5620550117
#include <iostream>
using namespace std ;
int main ()
{
    float A,L,H;
    cout<<"Arrival time :";
    cin>>A;
    cout<<"Leave time :";
    cin>>L;
    if(L-A<=3.14)
    cout<<"You have to pay 0 bath";
    else if(3.15<=L-A && L-A<=4.14)
    cout<<"You have to pay 20 bath";
    else if(4.15<=L-A && L-A<=5.14)
    cout<<"You have to pay 40 bath";
    else if(5.15<=L-A && L-A<=6.14)
    cout<<"You have to pay 60 bath";
    else if(6.15<=L-A && L-A<=7.14)
    cout<<"You have to pay 110 bath";
    else if(7.15<=L-A && L-A<=8.14)
    cout<<"You have to pay 160 bath";
    else if(L-A>8.15)
    cout<<"You have to pay 500 bath";
    else if(L-A<0)
    cout<<"you can't leave befpre arrival time";
    system ("pause");
    return 0;
}

