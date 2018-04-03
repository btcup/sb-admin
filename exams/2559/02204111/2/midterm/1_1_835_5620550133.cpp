//5620550133 Kitsada Kairat
#include <iostream>
using namespace std;
int main()
{
    char T,A,B,C,J;
    float x,y;
    cout<< " ------- Car lease calculator -------"<<endl;
    cout<< " Enter car model : " ;
    cin>>T;
    cout<< " Enter Number of years (1-6) : ";
    cin>>x;
    cout<< " Enter percentage of down payment : " ;
    cin>>y;
    
    if(T=C)
    {
           cout<< " Financing amount : "   << (738000-(7380000*(y/100))) <<endl;           
           cout<< " Amount of interest : " << (738000-(738000*(y/100)))*(0.0199)*(x)<<endl;
           cout<< " Monthly payment : "    << ((738000-(738000*(y/100)))+((738000-(738000*(y/100)))*(0.0199)*(x)))/(x*12)<<endl;
    }
    else if(T=A)
    {
           cout<< " Financing amount : "   <<(1385000-(1385000*(y/100)))<<endl;           
           cout<< " Amount of interest : " <<(1385000-(1385000*(y/100)))*(0.0209)*(x)<<endl;
           cout<< " Monthly payment : "    << ((1385000-(1385000*(y/100)))+(1385000-(1385000*(y/100)))*(0.0209)*(x))/(x*12)<<endl;
    }
    else if(T=B)
    {
           cout<< " Financing amount : "   << (511500-(511500*(y/100))) <<endl;           
           cout<< " Amount of interest : " << (511500-(511500*(y/100)))*(0.0179)*(x)<<endl;
           cout<< " Monthly payment : "    << ((511500-(511500*(y/100)))+(511500-(511500*(y/100)))*(0.0179)*(x))/(x*12)<<endl;
    }
    else if(T=J)
    {
           cout<< " Financing amount : "   << (694000-(694000*(y/100))) <<endl;           
           cout<< " Amount of interest : " << (694000-(694000*(y/100)))*(0.0199)*(x)<<endl;
           cout<< " Monthly payment : "    << ((694000-(694000*(y/100)))+(694000-(694000*(y/100)))*(0.0199)*(x))/(x*12)<<endl;
    }
    else
    {
           cout<< "Error!,number of years is not in range " ;
           //cout<< " Financing amount : "   << (694000-(694000*(y/100))) <<endl;           
           //cout<< " Amount of interest : " << (694000-(694000*(y/100)))*(0.0199)*(x)<<endl;
           //cout<< " Monthly payment : "    << ((694000-(694000*(y/100)))+(694000-(694000*(y/100)))*(0.0199)*(x))/(x*12)<<endl;
    }
    
system("pause");
return 0 ;
}
