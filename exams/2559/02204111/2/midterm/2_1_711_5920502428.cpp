#include <iostream> //5920502428 Nammon Yangmongkol
using namespace std;
int main()
{
    char m ;
    int A=1 , B=2 , C=3 , J=4 , F , s , y ;
    float x , z ;
    cout << "------- Car lease calculator -------" << endl;
    cout << "Enter car model : " ;
    cin >> m ;
    cout << "Enter number of year (1-6) : " ;
    cin >> y ;
    cout << "Enter your salary : " ;
    cin >> s ;
    cout << "------------------------------------" <<endl;
    
    if (m=1)
    {
    F=(1385000-(1385000-3/4));
    cout << "Financing amount : " <<F<<endl;
    z=F*2.09*y;
    cout << "Amount of interest : " << z<<endl;
    x=(F+z)/(y*12);
    cout << "Monthly payment : " << x<<endl;
    }
    else if (m=2)
    {
    F=(511500-(511500-3/4));
    cout << "Financing amount : " <<F<<endl;
    z=F*1.79*y;
    cout << "Amount of interest : " << z<<endl;
    x=(F+z)/(y*12) ;
    cout << "Monthly payment : " << x<<endl;
    
    }
    else if (m=3)
    {
    F=(738000-(738000-3/4));
    cout << "Financing amount : " <<F<<endl;
    z=F*1.99*y;
    cout << "Amount of interest : " <<z<<endl;
    x=(F+z)/(y*12);
    cout << "Monthly payment : " << x<<endl; 
    }
    else if (m=4)
    {
    F=(694000-(694000-3/4));
    cout << "Financing amount : " <<F<<endl;
    z=F*1.99*y;
    cout << "Amount of interest : " << z<<endl;
    x=(F+z)/(y*12);
    cout << "Monthly payment : " << x<<endl;
    }
    else if (x>(s*(1/2)))
    cout << "The monthly payment is over than 50% of your salary!!" <<endl;
    
    else if (x<=(s*(1/2)))
    cout << "Good decision, Enjoy your new car" << endl;
    
    system ("pause");
    return 0;
}
