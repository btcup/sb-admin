#include <iostream>
using namespace std;
int main ()
{
    char member ;
    float old, price;
    cout<< "Are you member (Y or N): ";
    cin>> member;
    cout<< "How old are you?: ";
    cin>> old;
    cout<< "Nomal price: ";
    cin>> price;
    cout<< "\nYou have to pay ";
    if (member=='Y')
    {
                    if (old<2) cout<< price*0 <<endl;
                    else if (2>=old || old<=12) cout<< price-(price*0.7) <<endl;
                    else if (old>12) cout<< price-(price*0.5) <<endl;
    }
    else if (member=='N')
    {
                    if (old<2) cout<< price*0 <<endl;
                    else if (2>=old || old<11) cout<< price-(price*0.5) <<endl;
                    else if (old>10) cout<< price <<endl;
    }
    system ("pause");
    return 0;
}
