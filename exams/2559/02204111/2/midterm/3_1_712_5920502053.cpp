#include <iostream>
using namespace std;

int main ()
{
    float f, p, r;
    int x, y, z;
    cout << "Arrival : ";
    cin >>f;
    cout << "Leave time : ";
    cin >>p;
    y = p - f;
    if (f > p)
    {
            cout << "You can't leave before arrival time" << endl;
    }
    else if(y <= 3)
    {
            cout << y << " hour and " << 10 << " minutes " << endl;
            cout << "You have to pay " << 0 << " bath" << endl;
    }
    else if (y <= 6)
    {
            cout << y << " hour and " << 45 << " minutes " << endl;
            cout << "You have to pay " << 40 << " bath" << endl;
    }
    else if (y <= 8)
    {
            cout << y << " hour and " << 15 << " minutes " << endl;
            cout << "You have to pay " << 160 << " bath" << endl;
    }
    else if (y > 8)
    {
            cout << y << " hour and " << 20 << " minutes " << endl;
            cout << "You have to pay " << 500 << " bath" << endl;
    }
    system ("pause");
    return 0;
}
