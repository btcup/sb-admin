//5620502147 Wanitcha Jittrong
#include <iostream>;
#include <cmath>;
using namespace std;
int main()
{
     char A,B,C,J;
     int a;
     int b;
     cout<<"Enter car model : ";
     cin>>A,B,C,J;
     cout<<"Enter number of years (1-6) :";
     cin>>a;
     cout<<"Enter your salary :";
     cin>>b;
     {
            int w,x,y,z;
         w=1385000-((1385000*25)/100);
         x=511500-(511500*25/100);
         y=738000-(738000*25/100);
         z=694000-(694000*25/100);
         if (w)
         {
         cout<<"Financing amount:"<<w;
         }
         else if (x)
        {
               cout<<"Financing amount:"<<x;
         }
         else if (y)
         {cout<<"Financing amount:"<<y;}
         else 
         {
              cout<<"Financing amount:"<<z;
         }
         }
         cout<<"Amount of interest :"<<A*a*b;
         cin>>A,a,b;
         
     system ("pause");
     return 0;
     }
