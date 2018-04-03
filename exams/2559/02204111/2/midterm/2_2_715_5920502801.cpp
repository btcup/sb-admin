#include <iostream> //5920502801 Piyawat sriueng
#include <cmath>
using namespace std;
int main ()
{
    int x,y,z,a;
    cout<< "Enter an integer:";
    cin >>x>>y>>z;
    a=(x*100)+(y*10)+z;
    if (a>100&&a<1000)
    cout<<"coutnumber of digit is 3" <<endl;
    cout<<x<<y<<z;
    system ("pause");
    return 0;
}
