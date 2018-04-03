#include <iostream>
using namespace std;
main ()
{
     cout << " ------- Car lease calculator -------"<<endl;
     char x;
     float y,z,q,e,w ;
     cout << " Enter car model :" ;
     cin >> x;
     cout << " Enter number of year (1-6) :" ;
     cin >> y;
     cout << " Enter percentage of down payment :" ;
     cin >> z;
     
     
     if(x=='A' && y>0 && y<4 ){
     q = 1385000 - 1385000*z/100;
     w = q*y*(1.99/100) ;
     e = (q+w)/(y*12) ;
     cout << " Financing amount :"<< q <<endl;
     cout << " Amount of interest :" << w << endl;
     cout << " Monthly payment :" << e << endl;
     }
      if(x=='A' && y>3 && y<7 ){
     q = 1385000 - 1385000*z/100;
     w = q*y*(2.09/100) ;
     e = (q+w)/(y*12) ;
     cout << " Financing amount :"<< q <<endl;
     cout << " Amount of interest :" << w << endl;
     cout << " Monthly payment :" << e << endl;
     }
     if (x=='B' && y>0 && y<4 ){
     q = 511500 - 511500*z/100;
     w = q*y*(1.69/100) ;
     e = (q+w)/(y*12) ;
     cout << " Financing amount :"<< q <<endl;
     cout << " Amount of interest :" << w << endl;
     cout << " Monthly payment :" << e << endl;
     }
      if(x=='B' && y>3 && y<7 ){
     q = 511500 - 511500*z/100;
     w = q*y*(1.79/100) ;
     e = (q+w)/(y*12) ;
     cout << " Financing amount :"<< q <<endl;
     cout << " Amount of interest :" << w << endl;
     cout << " Monthly payment :" << e << endl;
     }
      if(x=='C' && y>0 && y<4 ){
     q = 738000 - 738000*z/100;
     w = q*y*(1.89/100) ;
     e = (q+w)/(y*12) ;
     cout << " Financing amount :"<< q <<endl;
     cout << " Amount of interest :" << w << endl;
     cout << " Monthly payment :" << e << endl;
     }
     if(x=='C' && y>3 && y<7 ){
     q = 738000 - 738000*z/100;
     w = q*y*(1.99/100) ;
     e = (q+w)/(y*12) ;
     cout << " Financing amount :"<< q <<endl;
     cout << " Amount of interest :" << w << endl;
     cout << " Monthly payment :" << e << endl;
     }
      if(x=='J' && y>0 && y<4 ){
     q = 694000 - 694000*z/100;
     w = q*y*(1.89/100) ;
     e = (q+w)/(y*12) ;
     cout << " Financing amount :"<< q <<endl;
     cout << " Amount of interest :" << w << endl;
     cout << " Monthly payment :" << e << endl;
     }
      if(x=='J' && y>3 && y<7 ){
     q = 694000 - 694000*z/100;
     w = q*y*(1.99/100) ;
     e = (q+w)/(y*12) ;
     cout << " Financing amount :"<< q <<endl;
     cout << " Amount of interest :" << w << endl;
     cout << " Monthly payment :" << e << endl;
     }
     else if(y>6)
     cout << "Error!, number of years is not range" << endl; 
     
     else 
     cout << " Error!!!!!!" << endl;
     
         

    
     
     
     
     system ("pause");
     return 0;
}
