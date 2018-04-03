//5920502754 Thanakorn Kaewhiransap
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float x,y;
    cout<<"input value : ";
    cin>>x;
    y=0;
    while (x>=0)
    {
          
          if (x>9)
          {
          cout<<"Invalid Input!! Try Again"<<endl;
          }
          //
          if (x<9)
          {
          y=(y*10)+x;
          }
          cout<<"input value : ";
          cin>>x;
    }
    cout<<"Total is "<<y<<endl;
    system ("pause");
    return 0;
}
