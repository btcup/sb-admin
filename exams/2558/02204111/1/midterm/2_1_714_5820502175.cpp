#include <iostream>
using namespace std;
int main()
{
    char e,a,c,l,m,s,t,g,v,y,n;
    int i;
    float z;
    cout << "Welcome to A Cup-with-love-Coffee! !" <<endl;
    do
    {
    cout << "Enter your menu (E/A/L/C/M) : ";
    cin >>e>>a>>c>>l>>m;
    cout << "Enter size (S/T/G/V) : ";
    cin >>s>>t>>g>>v;
    cout << "How many cups? : ";
    cin >>i;
    cout << "Do you want other menu? (Y/N) : ";
    cin >>y>>n;
       if(y)
          {
         cout << "Enter your menu (E/A/L/C/M) : ";
         cin >>e>>a>>c>>l>>m;
         cout << "Enter size (S/T/G/V) : ";
         cin >>s>>t>>g>>v;
         cout << "How many cups? : ";
         cin >>i;
          } 
       if(n)
          {
            cout << "Are you a member? (Y/N) : ";
            cin >>y>>n;
            if(n)
            {
                 z=i/(10*100);
                 cout << "Total" << " " << "Baht" <<endl;
                 cout << "Discount" << " " << "Baht" << z <<endl;
                 cout << "Thank you." <<endl;
            }
            else
            {
                 cout << "Total" << " " << "Baht" <<endl;
                 cout << "Discount" << " " << "Baht" <<endl;
                 cout << "Thank you." <<endl;
            }      
          }
    }
    while(1);
system("pause");
return 0;
}
