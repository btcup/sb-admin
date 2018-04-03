#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    float a, ec;
    int x, y, z, uu;
    cout << "Enter electricity cost per unit (baths) : " ;
    cin >> a;
    cout << endl;
    cout << "Enter last unit : ";
    cin >> x;
    cout << "Enter current unit : ";
    cin >> y;
    uu = y - x;
    ec = (y - x) * a;  
    cout << "Units used : " << uu << endl;
    cout << "Electricity charg (baths) = " << ec << endl;
    cout << endl;
    system ("pause");
    return 0;
}
    
