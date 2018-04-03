//5620550371 Mr.kornwiwat suwannikkha  
#include<iostream>
#include <cmath>
using namespace std ;
int main () 
{  
    float n,y,sum ;
    cout << "Enter an interger: " ;
    cin >> n ;
    cout << "Number of digit is" ;
    cin >> y ;
    y++ ;
    sum = sum*y+n ;
    if (n==sum)
    cout << n << "is  a target number." ;
    else 
    cout << n << "is  not a target number." ;
 system ("pause") ;
    return 0 ;
}
