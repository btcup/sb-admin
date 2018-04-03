#include<iostream>
using namespace std ;
int main ()
{
    char model ;
    double years,salary,F,S,M ;
    const float down=0.25 ;
    cout << "-------Car lease calculator-----------\n" ;
    cout << "Enter car model : " ;
    cin >> model ;
    cout << "Enter number of years (1-6) : " ;
    cin >> years ;
    cout << "Enter your salary : " ;
    cin >> salary ;
    cout << "--------------------------------------\n" ;
    if (model=='A')
    {
     F=1385000-(1385000*down) ;
     S= F*2.09*years ;
     M=(F/(12*years)); 
    }
    else if (model=='B')
    {
     F=511500-(511500*down) ;
     S= F*1.79*years ;
     M=(F/(12*years)); 
    }
    else if (model=='C')
    {
     F=738000-(738000*down) ;
     S= F*1.99*years ;
     M=(F/(12*years));  
    }
    else if (model=='J')
    {
     F=694000-(694000*down) ;
     S= F*1.99*years ;
     M=(F/(12*years)); 
    }
    cout<<"Financing amount : " << F << endl;
    cout<<"Amount of interest : " << S << endl;
    cout<<"Monthly payment : " << M << endl;
    if (salary/2>=M)
     cout << "Good decision,Enjoy your new car" << endl;
    else 
     cout << "The monthly payment is over than 50% of your salary!!" << endl;
    
    
system("pause") ;
return 0; 
}
    
    
    
    
