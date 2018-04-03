#include <iostream>
using namespace std;
int main ()
{
    char E,A,C,L,M,e,a,c,l,menu,ask,mem;
    int size,cup,price,total,net;
    double dis;
    bool y=1,n=0;
    cout << "Welcome to A Cup-with-love Coffee! !" << endl;
    cout << "Enter your menu (E/A/L/C/M) : " ;
    cin >> menu ;
    cout << "Enter size (S/T/G/V) : " ;
    cin >> size ;
    cout << "How many cups? : " ;
    cin >> cup ;
    cout << endl;
    cout << "Do you want other menu? (Y/N) : " ;
    cin >> ask ;
    cout << endl;
    cout << "Are you a member? (Y/N): " ;
    cin >> mem;
    cout << endl;
    cout << "Total" << total << "Baht" << endl;
    dis = total*0.1;
    cout << "Discout" << dis << "Baht" << endl;
    cout << "You pay " << net << "Baht" << endl;
    cout << "Thank you."
    
  system ("pause");
  return 0 ;
}
