//5620550371 Mr.kornwiwat suwannikkha  
#include<iostream>
using namespace std ;
int main () 
{  
   char x ;
   double  a,b,c,d,e ;
   cout << "---------Car lease calculator----------" << endl;
   cout << "Enter car model :" ;
   cin >> x ;
   if(x!='A'&&x!='B'&&x!='C'&&x!='J')
    cout << "End Program" ;
    else {
         cout << "Enter number of years (1-6): " ;
         cin >> a ;
         if (a<=0&&a>6)
         cout << "Error" ;
    else {
         cout << " Enter your Salary " ;
         cin >> b; 
         if (b<0)
         cout << "Error" ;
    else {
         if (x=='A')
         {
         c=1385000-((0.25)*1385000);
         cout << "Financing amount:" << c <<endl ;
         d=c*(2.09/100)*a ;
         cout << "Amount of interest : " << d <<endl;
         e=(c+d)/(12*a) ;
         cout << "Monthly Payment" <<e <<endl;
         }
         else if (x=='B')
         {
         c=(511500-((0.25)*511500));
         cout << "Financing amount:" << c <<endl;
         d=c*(1.79/100)*a ;
         cout << "Amount of interest : " << d <<endl;
         e=(c+d)/(12*a) ;
         cout << "Monthly Payment" <<e <<endl;
         }
         else if (x=='C')
         {
         c=738000-((0.25)*738000);
         cout << "Financing amount:" << c <<endl;
         d=c*(1.99/100)*a ;
         cout << "Amount of interest : " << d <<endl;
         e=(c+d)/(12*a) ;
         cout << "Monthly Payment" <<e <<endl;
         }
         else if (x=='J')
         {
         c=694000-((0.25)*694000);
         cout << "Financing amount:" << c <<endl;
         d=c*(1.99/100)*a ;
         cout << "Amount of interest : " << d <<endl;
         e=(c+d)/(12*a) ;
         cout << "Monthly Payment" <<e <<endl;
         }
              if (e<=(0.5*b))
                 cout << "Good decision, Enjoy your new car" << endl; 
              else if ( e>(0.5*b))
                   cout << "The monthly payment is over than 50% of your salary !!!" <<endl ;
    }
    }
    }
 system ("pause") ;
    return 0 ;
}
