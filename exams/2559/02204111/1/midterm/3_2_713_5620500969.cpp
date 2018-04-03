#include <iostream> //5620500969 Wantanee Puangngarm 713
#include <cmath> 
using namespace std;
int main ()
{
    float a,b,c,x1,x2,y,z1,z2 ;
    cout << "Enter coefficients a,b and c :";
    cin >> a >> b >> c;
        y = (pow(b,2) - (4*a*c));
    if (y > 0 )
    {
       cout << "Root are real diffarent ." << endl;
            x1 = (((-1)*b) + sqrt(pow(b,2)-(4*a*c)))/(2*a);
       cout << "x1 = " << x1 << endl;
            x2 = (((-1)*b) - sqrt(pow(b,2)-(4*a*c)))/(2*a);
       cout << "x2 = " << x2 << endl;
    }
    else if ( y == 0 )
    {
       cout << "Root are real tha same ." << endl;
       x1 = (((-1)*b) + sqrt(pow(b,2)-(4*a*c)))/(2*a);
       cout << "x1 = x2 = " << x1 << endl;
    }
    else if ( y < 0 )
    {
       cout << "Root are comlex and different ." <<endl;
       x1 = (((-1)*b)/(2*a)) + (sqrt((-1)*pow(b,2))-(4*a*c)/(2*a));
       cout << "x1 = "<< x1 << endl;
       x2 = (((-1)*b)/(2*a))- (sqrt((-1)*pow(b,2))-(4*a*c)/(2*a));
       cout << "x2 = "<< x2 << endl;
       
    }
       
system ("pause");
return 0;
}
           

       
       
       
       
       
       
       
       
       
       
