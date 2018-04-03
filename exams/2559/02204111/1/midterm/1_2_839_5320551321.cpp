//5320551321 Wasin Sudjai
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char x;
    double a,b,c,d;
    cout<<"Enter objective (Living, Agriculture) :";
    cin>>x;
    cout<<"Enter living type (Main, second) :";
    cin>>x;
    cout<<"Enter land cost (million) :";
    cin>>a;
    cout<<"Enter building cost (million) :";
    cin>>b;
    cout<<"Building age :";
    cin>>c;
    if(x=='L')
    {
              if(x=='M')
              {
                        if(a<50)
                        {
                           d=d+1;     
                        }
                        else if(a>=50&&a<100)
                        {
                           d=d+2;
                        }
                        else if(a>100)
                        {
                           d=d+3;
                        }
              }
              else if(x=='S')
              {
                        if(a<5)
                        {
                           d=d+4;     
                        }
                        else if(a>=5&&a<10)
                        {
                           d=d+5;
                        }
                        else if(a>10)
                        {
                           d=d+6;
                        }
              }
    }
    
    else if(x=='A')
    {
                        if(a<40)
                        {
                           d=d+4;
                           cout<<"Your estate cost is"<<a<<"million bath.";
                           cout<<"The land tax is exemtion.";     
                        }
                        else if(a>=40&&a<80)
                        {
                           d=d+5;
                        }
                        else if(a>80)
                        {
                           d=d+6;
                        }
   }
system("pause");
return 0;
}
