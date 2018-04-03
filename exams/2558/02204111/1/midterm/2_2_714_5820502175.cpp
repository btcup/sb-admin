#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float h,w,d;
    char a,b,c;
    cout << "Welcome to the Fantastic Tiles! !" <<endl;
    cout <<"Please enter room size in meter (H*W*D) : ";
    cin >>h>>w>>d;
    cout << "Plesae select floor tile... (A/B/C) : ";
    cin >>a>>b>>c;
    cout << "Please select wall tile... (A/B/C) : ";
    cin >>a>>b>>c;
    cout << "----------------------------------" <<endl;
    cout << "Number of floor tiles :" <<" "<<"-->Price = "<< " " <<"Bath" <<endl;
    cout << "Number of wall tiles :" <<" "<<"-->Price = "<< " " <<"Bath" <<endl;
    cout << "Total price : "<<" + "<<" = "<<" "<<"bath" <<endl;
system("pause");
return 0;
}
