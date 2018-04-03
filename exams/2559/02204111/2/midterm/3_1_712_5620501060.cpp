#include <iostream> //5620501060 Napassorn Pluemsut
#include <cmath>
using namespace std;
int main ()
{
    int hour,min,pay;
    double  a,l,t; 
    
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>l;
    hour=(int)l-(int)a;
    cout<<hour<<"hours"<<min<<"minutes"<<endl;
    
    if(l>a)
    {
    if (hour<=3)
    pay=0*hour;
    else if (hour<=6)
    pay=20*hour;
    else if (hour<=8)
    pay=50*hour;
    else if (hour>8)
    pay=500;
    
    cout<<"You have to pay"<<pay<<"bath"<<endl;
    }
    
    else
    cout<<"You can't leave before arrival time";
    
    system ("pause");
    return 0;
}
