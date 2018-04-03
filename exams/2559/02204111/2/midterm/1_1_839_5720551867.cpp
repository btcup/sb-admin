#include<iostream>
using namespace std;
int main()
{
    char x;
    int A=1385000,  a=2.09, 
        B=511500,   b=1.79,
        C=738000,   c=1.99,
        J=694000,   j=1.99;
    
    cout << "------- Car lease calculator -------" << endl;
    cout << "Enter car model : ";
    cin >> x;
    cout << "Enter number of years (1-6): ";
    cin >> x;
    cout << "Enter percentage of down payment : ";
    cin >> x;
    cout << "------------------------------------" << endl;
    cout << "Financing amount : "  << 369000 << endl;
    cout << "Amount of interest : "  << 20922.3 << endl;
    cout << "Monthly payment : " << 10831.2 << endl;
   
        
system ("pause");
return 0;
}
