//5920502622KantarostChaisriwee

#include<iostream>
using namespace std;
int main()
{
    float a,e;
    int b,c,d;
    
    cout << "Enter electricity cost per unit (baths) : " ;
    cin >> a;
    cout << "Enter last unit: " ;
    cin >> b;
    cout << "Enter current unit: " ;
    cin >> c;
    d = c-b ;
    cout << "Units used = " <<d <<endl;
    e = d*a ;
    cout << "Electricity charge (baths) = " <<e;
    
    
    if (a>0&&a<100000)
    {
        if(a<b)
        {
               cout << " " ;
        }
        else
        {cout<<"Invalid current unit!";}
        }
    
    system ("pause");
    return 0;
}
