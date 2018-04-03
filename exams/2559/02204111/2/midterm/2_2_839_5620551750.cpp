#include <iostream> //5620551750 Pongsatorn Sangsawang
#include <cmath>
using namespace std;
int main ()
{
    int x,y,i,j,k,l,m;
    double z;
    cout<<"Enter an interger:";
    cin>>x;
    if (x<1000)
    {
               y=3;
               cout<<"Number of digit is "<<y<<endl;
               i = x/100;
               j = (x/10)-30;
               k = x%10;
               z = (i*i*i)+(j*j*j)+(k*k*k);
               if (x==z)
               cout<<x<<" is target number."<<endl;
               else
               cout<<x<<" not is target number."<<endl;
    }
    else if (x<10000)
    {
               y=4;
               cout<<"Number of digit is "<<y<<endl;
               i = x/1000;
               j = (x/100)-10;
               l = (x/10)- 160;
               k = x%10;
               z = (i*i*i*i)+(j*j*j*j)+(k*k*k*k)+(j*j*j*j);
               if (x==z)
               cout<<x<<" is target number."<<endl;
               else
               cout<<x<<" not is target number."<<endl;
    }
    else if (x<100000)
    {
               y=5;
               cout<<"Number of digit is "<<y<<endl;
                i = x/100;
               j = (x/10)-30;
               k = x%10;
               z = (i*i*i)+(j*j*j)+(k*k*k);
               if (x==z)
               cout<<x<<" is target number."<<endl;
               else
               cout<<x<<" not is target number."<<endl;
    }
               system("pause");
               return 0;
}
