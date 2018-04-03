#include <iostream>
using namespace std;
int main()
{
    double x,z,q;
    char Y, N;
    cout << "Are you namber (Y or N):";
    cin >> Y;
    cout << "Haw old are you?:";
    cin >> x;
    cout << "Nolmal price :";
    cin >> z;
    while(Y||N)
    {
        if(x<2)
        q=z/100;
        break;
        }
        if(x<=10)                        
        q=(z*50)/100;  
        {             
        if(x>10)
        q=z;  
        } 
    cout << "You have to pay" << q << endl;
    system ("pause");
    return 0;
}
