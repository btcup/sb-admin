#include <iostream> // 5920501090 thanapath suratmathaphan 
#include <cmath>
using namespace std ;
int main ()
{
    
    const float down = 0.25 ; 
    char  model  ;
    
    float salary ,year  ;
    
    
    cout << "------- Car lease calculator -------" << endl;
    cout << "Enter car model : " ;
    cin >> model ;
    cout << "Enter number of year (1-6) : " ;
    cin >> year ;
    cout << "Enter your salary : " ;
    cin >> salary ;
    cout << " ------------------------------------- "<< endl;
    if (model == 'A')
    {
         cout << "Financing amount : " << ( 1385000 -  (0.25*1385000) ) << endl;
         cout << "Amount of interest : " <<  (   ((1385000 -  (0.25*1385000) )*0.029 ) * year  )<< endl;
         cout << "Monthly payment : " << ( ( ( 1385000 -  (0.25*1385000) ) +  (   ((1385000 -  (0.25*1385000) )*0.029 ) * year  )  ))/ (year*12)  << endl;
    }
    
    
     if (model == 'B')   
    {
         cout << "Financing amount : " <<    ( 511500 -  (0.25*511500) )        << endl;
         cout << "Amount of interest : " <<   (   ((511500 -  (0.25*511500) )* 0.0179 ) * year  )      << endl;
         cout << "Monthly payment : " <<    (( ( 511500 -  (0.25*511500) ) +  (   ((511500 -  (0.25*511500) )*0.0179 ) * year  )  )) / (year*12)       << endl;
    }
    if (model == 'C')   
    {
         cout << "Financing amount : " <<   ( 738000 -  (0.25*738000) )        << endl;
         cout << "Amount of interest : " <<      (   ((738000 -  (0.25*738000) )* 0.0199 ) * year  )       << endl;
         cout << "Monthly payment : " <<  ( ( ( 738000 -  (0.25*738000) ) +  (   ((738000 -  (0.25*738000) )*0.0199 ) * year  )  )) / (year*12)   << endl;
    }
     if (model == 'J')   
    {
         cout << "Financing amount : " <<     ( 694000 -  (0.25*694000) )        << endl;
         cout << "Amount of interest : " <<    (   ((694000 -  (0.25*694000) )* 0.0199 ) * year  )    << endl;
         cout << "Monthly payment : " << ( ( ( 694000 -  (0.25*694000) ) +  (   ((694000 -  (0.25*694000) )*0.0199 ) * year  )  )) / (year*12)    << endl;
    }
    
    
       
    
    
    
    
    
    system ("pause");
    return 0 ;
}
