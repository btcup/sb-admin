//5920502703_Nattanicha Phanthachai
#include <iostream> 
#include <cmath>
using namespace std;
int main ()
{
    char type;
    double a, l ,pay, time, b;
    int d;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
    cin>>type;
if (type == 'M' || type == 'm' || type == 'C' || type == 'c')
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>l;
    time = l - a;
    b = time*100;
    d = int(b)%100;
    if (type == 'C' || type == 'c')
    {
                 if (time <= 2)
    pay = 0;
    else if (time <=5 || time >= 3)
    pay = ceil(l - a)*30;
    else if (time <=8 || time >= 6)
    pay = ceil(l - a)*50;
    else if (time > 8)
    pay = 500;
    cout<<int(time)<<" hour and "<<d<<"minutes"<<endl;
    cout<<"You have to pay "<<pay<<endl;
}
    else if (time <=0 || d <=0)
        cout<<"You can't leave before arrival time"<<endl;
else if (type == 'M' || type == 'm')
    {
    if (time <= 2)
    pay = 0;
    else if (time <=7 || time >= 4)
    pay = ceil(l - a)*10;
    else if (time > 7)
    pay = 150;
    cout<<int(time)<<" hour and "<<d<<"minutes"<<endl;
    cout<<"You have to pay "<<pay<<endl;
}
    system ("pause");
    return 0;
}
    
