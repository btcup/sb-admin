//55820502329 Jirat Siengluecha ;
#include <iostream> 
using namespace std ;

int main () 
{
    int a , b , sum  ;
    double arrival , leave , x , y , z , X , Y , W;

    cout << " Arrival time : " ;
    cin >> arrival ;
    cout << " Leave time : " ;
    cin >> leave ;
    sum = leave - arrival ;
    a = arrival; 
    b = leave ;
    x = arrival - a ;
    y = leave - b ;
    X = 60 - (x*100) ;
    Y = 60 - (y*100) ;
    W = 60 - Y ;
    z = X + W ;
    if (z >= 60)
    {
         z = z-60;
    }
    if (sum <= 3)
    {
            cout << " " << sum << " hours and " << z <<  " minutes " << endl;
            cout << " You have to pay 0 bath " << endl;
    }
    else if ( sum >= 4 && sum <= 6 )
    {
            cout << " " << sum << " hours and " << z <<  " minutes " << endl;
            if (z >= 15)
            cout << " You have to pay " << (sum - 2)*20 << " bath " << endl;
            else
            cout << " You have to pay " << (sum - 3)*20 << " bath " << endl;
    }
    else if ( sum >= 7 && sum <= 8 )
    {
            cout << " " << sum << " hours and " << z <<  " minutes " << endl;
            if (z >= 15)
            cout << " You have to pay " << ((7 - 2)*20) + (sum - 6) * 50 + 10 << " bath " << endl;
            else
            cout << " You have to pay " << ((7 - 3)*20) + (sum - 6) * 50 + 10 << " bath " << endl;
    }
    else if (sum > 8)
    {
            cout << " " << sum << " hours and " << z <<  " minutes " << endl;
            cout << " You have to pay " << 500 << " bath " << endl;
    }
     else
            cout << " you can't leave before arrival time " << endl;   
    system ("pause");
    return 0;
    
}
