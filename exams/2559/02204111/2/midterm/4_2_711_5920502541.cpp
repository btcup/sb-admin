// 5920502541 Wijittra Danjinda
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a positive interger : ";
    cin >> x;
    if (x>0)
    {
            if((x<10)&&(x!=0))
            {
                    cout << "Number of digit is 1 " <<endl;  ;
            }
            else if ((x<100)&&(x>=10))
            {
                    cout << "Number of digit is 2 " <<endl;  ;
            }
            else
            {
                    cout << "Number of digit is 3 " <<endl;
            }
    }
    else
    {
        cout << "Invalid number !" << endl;
    }        
    cout << "Factor of "<<x<<" are : " ;
    system("pause");
    return 0;
}
