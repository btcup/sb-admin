#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,g,h,i,x;
    cin >> x ;
    cout << "Enter a matrix size :  " << x << endl;
    cout << "Enter matrix values :  " << endl;
    cin >> a  >> b >> e ; 
    cin >> c  >> d >> f;
    cin >> g  >> h >>i ;
    cout << "The following matrix is not diagonal matrix :"  << endl;
    cout << "|"<< a <<" " << b << " " << e << "|" << endl;
    cout << "|"<< c <<" " << d << " " << f << "|" << endl;
    cout << "|"<< g <<" " << h << " " << i << "|" << endl;
system ("pause");
return 0 ;
}
