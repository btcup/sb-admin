
//5820551613 Tanut petchan
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float a,b,c,d,e,m,n;
    cout<< " Arrival time : ";
    cin >> a;
    cout << " Leave time : ";
    cin >> b;
    
     c = int (b)- int (a);
    d = a - int (a);
     e = b - int (b);
     m = 60 - d;
     n = m+e;
    // cout << n;
    
    
    
    cout << c << " hours "<< d <<" minutes "<<endl;;
    if (c==3 && c<3 )
    { cout << " You have to play 0 bath ";}
    else if (c>=4 && c<=6)
    { cout << " You have to play  40  bath ";}
    else if ( c>=7 && c<=8)
    { cout << " You have to play 160  bath ";}
    else if ( c>8)
    { cout << " You have to play 500 bath ";}
    else 
    { cout << " You can't leave before arrival time";}
    
    
    
    
    
    system ("pause");
    return 0;
}
