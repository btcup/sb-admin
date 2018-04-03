//55820502329 Jirat Siengluecha ;
#include <iostream> 
using namespace std ;

int main () 
{
    double x , a , b , i , sum , c ;
    do
    {
    cout << " Enter electricity cost per unit (bahts) : " ;
    cin >> x ;
    }while(x <= 0);
    do
    {
    cout << " Enter last unit : " ;
        cin >> a ;
        a;
    if (a == -1 )
    {
          cout << " -- End of Calculation -- " << endl ;
          i=1 ;
    }
    cout << " Enter current unit : " ;
        cin >> b ;
        b;
    if (b == -1 )
    {
          cout << " -- End of Calculation -- " << endl ;
          i=1 ;
    }
    if (a - b > 0 || a <0 || b < 0  )
    {
          cout << " Invalid current unit ! " << endl ;
         continue ;
    }
    
    if (b > a)
    {
        c = b - a ;
        sum = c * x ;
        cout << " Unit used = " <<  c << endl ;
        cout << " Electricity charge (bahts) = " <<  sum << endl ;
        sum ;
    }
    
} while (i!=1);
   cout << " Total of Electricity charge (bahts) = " << sum << endl ;
    system ("pause");
    return 0;
    
}
