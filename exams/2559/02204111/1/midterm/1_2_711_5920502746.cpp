#include <iostream>
using namespace std;
int main()
{
    char a,b;
    double  c,d,e,f,g      ;
    cout<<"Enter objective (Living, Agriculture) : ";
    cin>>a;
    if(a=='L')
    {
              cout<<"Enter living type (Main, Second) : ";
              cin>>b;
              cout<<"Enter land cost (million) : ";
              cin>>c;
              cout<<"Enter building cost (million) : ";
              cin>>g;
              cout<<"Building age : ";
              cin>>e;
              
              if(b=='M')
              {
                  if(c+g<50)
                  d=0;
                  else if(c+g>=50&&c+g<100)
                  d=0.06/100;
                  else if(c+g>=100)
                  d=0.12/100;
              }
              else if(b=='S')
              {
                  if(c+g<5)
                  d=0.3/100;
                  else if(c+g>=5&&c<10)
                  d=0.6/100;
                  else if(c+g>=10)
                  d=0.9/100;
              }
              if(e>=1&&e<=15)
              f=(1.2/100)*e;
              else if(e>=16&&e<=40)
              f=(2.5/100)*e;
              else if(e>40)
              f=65/100;
              
              cout<<"Your estate cost is "<<c+(d+f)<<" ("<<c<<"+"<<d+f<<") "<<"million bath."<<endl;
              cout<<"The land tax is "<<f<<" million bath"<<endl;
              
    }
    
    else if(a=='A')
    {
              cout<<"Enter land cost (million) : ";
              cin>>c;
              
              if(c<40)
              d=d;
              else if(c>=40&&c<80)
              d=(d*0.04)/100;
              else if(c>80)
              d=(d*0.08)/100;
              
              cout<<"Your estate cost is "<<c+d<<" million bath."<<endl;
              cout<<"The land tax is exemption."<<endl;
              
              
    }
    
    system ("pause");
    return 0;
}
