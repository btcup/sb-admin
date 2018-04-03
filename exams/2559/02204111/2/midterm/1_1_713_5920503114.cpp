//5920503114 Thanathorn Ruenghirunwanit
#include<iostream>
using namespace std;
int main()
{
    char car; 
    int year , payment ;
    double f,a,m,z;
    cout<< "------- Car lease calcultor ------- " << endl; 
    cout << "Enter car model : " ;
    cin >> car;
    cout << "Enter number of years (1-6) : " ;
    cin >> year ;
    while(year)
    {
               if(year<1||year>6)
               {
                      cout << "Error!, number of years is not in range " << endl ;
    break;
    }
    cout << "Enter percentage of down payment : " ;
    cin >> payment ;
    cout << " ----------------------------- " << endl;
    
    if(car== 'A')
    {
    f =  1385000 - (1385000*payment)/100 ;
    z = 2.09 ;
}
    else if(car== 'B')
    {
    f = 511500 - (511500*payment)/100 ;
    z = 1.79 ;
}
    else if(car== 'C')
    {
    f = 738000 - (738000*payment)/100 ;
    z = 1.99 ;
}
    else if(car== 'J')
    {
    f = 694000 - (694000*payment)/100 ;
    z = 1.99 ;
}
    cout << "Financing amount : " << f << endl;
    if(year<4)
    z = z - 0.1 ;
    a = f*z*year/100;
    cout << "Amount of interest : " << a << endl;
    m = (f + a)/(year*12) ;
    cout << "Monthly payment : " << m << endl;
    break;
    }
    system("pause");
    return 0;
    }
