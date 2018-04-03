#include <iostream>
using namespace std;
int main ()
{
    char a,b,c,d,f;
    int n;
   do{
    cout<<"Welcome to A Cup-with-love Coffee!!\n";
    cout<<"Enter your menu (E/A/L/C/M):";
    cin>>a;
    cout<<"Enter size (S/T/G/V) :";
    cin>>b;
    cout<<"How many cups? :";
    cin>>c;
    cout<<"Do you want other menu? (Y/N) :";
    cin>>d;
}
 while(d=='y||Y');
 cout<<"Are you a member? (Y/N) :";
 cin>>f;
    system ("pause");
    return 0;
}
