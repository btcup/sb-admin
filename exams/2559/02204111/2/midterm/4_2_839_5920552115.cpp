#include<iostream>
using namespace std;
int main ()
{
    int x,n ;
    cout<< "Enter a positive integer :";
    cin>> x ;
    
    for( n = 0 ; n%2!=0 ; n = n/2 )
    cout<< " Number of digit " << " is " << " 2 " << endl ;
    cout << "Factor of " << " " << " are : " << " 1 * 24 " << " = " << "24" << " 2* 12" << " = " << " 24 "<<" 3*8 "
     << " = " << " 24 "  << "4*6" <<" = " << " 24 " << "6*4 " << " = " << " 24 "<<"8*3" << " = " << " 24 " 
     << "12*2" << " = " << " 24 "<< "24*1" << " = " <<" 24 "<< endl;
     for ( n = 0; n%1!=0 ; n = n/3)
     cout<< " Number of digit " << " is " << " 3 " << endl ;
     cout << "Factor of " << " " << " are : " << " 1* 151 " << " = " << " 151 " << " 151 * 1" << " = " << " 151 " << endl;
      
     for( n = 0 ; n%3!=0 ; n = n/3 )
     cout<< " Number of digit " << " is " << " 1 " << endl ;
     cout << "Factor of " << " " << " are : " << " 1 * 9 " << " = " << "9" << " 3* 3" << " = " << " 9 "<<" 9*1 "
     << " = " << " 9 "<< endl;
     for( n = 0 ; n%4!= 0 ; n = n/4)
     cout<< " Number of digit " << " is " << " 4 " << endl ;
     cout << "Factor of " << " " << " are : " << "1*1999" << " = " <<" 1999 " << "1999*1 " << "="<< "1999"<< endl;
     
     
     
     
    
    system("pause") ;
    return 0 ;
}
    
