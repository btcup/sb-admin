//5920500808    Pikhanet Attasuriyakun
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,i;
    cout << "Enter coefficients a,b and c : ";
    cin >> a >> b >> c ;
    cout << endl;
    i=(b*b-4*a*c);
    if (i > 0 )
       {
       cout << "Roots are real and differrent." << endl;
       cout << "x1 = " << (-b+sqrt(b*b-4*a*c))/(2*a) << endl;
       cout << "x2 = " << (-b-sqrt(b*b-4*a*c))/(2*a) << endl; 
       }
    if (i == 0 )
       {
       cout << "Roots are real and same." << endl;
       cout << "x1 = x2 = " << (-b+sqrt(b*b-4*a*c))/(2*a) << endl;
       }
    if (i < 0 )
       {
       cout << "Roots are complex and different." << endl;
       cout << "x1 = " << (-b/(2*a)) << " + " << (sqrt(-(b*b-4*a*c))/(2*a)) << "i" << endl;
       cout << "x2 = " << (-b/(2*a)) << " - " << (sqrt(-(b*b-4*a*c))/(2*a)) << "i" << endl;
       }
    system("pause");
    return 0;
}
