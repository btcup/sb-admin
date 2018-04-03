#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float h,w,d,x,y,a,b,c;
    char flo,wall;
    x=0;
    y=0;
    a=0;
    b=0;
    c=0;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    do
    {
    cout<<"Please enter room size in meter (H x W x D)";
    cin>>h>>w>>d;
    cout<<"Please select floor tile ...(A/B/C) :";
    cin>>flo;
    if(flo=='A'||flo=='a')
    {
      x=(w*d)/900*pow(10,-3);
      y=celi(x);
      cout<<"Please select wall tile ...(A/B/C) :";
      cin>>wall;
      if(flo=='A'||flo=='a')
      {
      x=(w*d*h)/400*pow(10,-3);
      a=celi(x);
      b=y*55;
      c=(a*17)*4;
      cout<<"Number of fioor tiles :"<<y<<"-->Price = "<<b<<endl;
      cout<<"Number of wall tiles :"<<a<<"-->Price = "<<c<<endl;
      cout<<"Total price :"<<b<<"+"<<b<<"="<<b+c<<"Bath"
      }
    }
    if(flo=='B'||flo=='b')
    {
      x=(w*d)/2025*pow(10,-3);
      y=celi(x);
      cout<<"Please select wall tile ...(A/B/C) :";
      cin>>wall;
      if(flo=='A'||flo=='a')
      {
      x=(w*d*h)/600*pow(10,-3);
      a=celi(x);
      b=y*80;
      c=(a*32)*4;
      cout<<"Number of fioor tiles :"<<y<<"-->Price = "<<b<<endl;
      cout<<"Number of wall tiles :"<<a<<"-->Price = "<<c<<endl;
      cout<<"Total price :"<<b<<"+"<<b<<"="<<b+c<<"Bath"
      } 
    }                
    if(flo=='C'||flo=='c')
    {
      x=(w*d)/3600*pow(10,-3);
      y=celi(x);
      cout<<"Please select wall tile ...(A/B/C) :";
      cin>>wall;
      if(flo=='A'||flo=='a')
      {
      x=(w*d*h)/900*pow(10,-3);
      a=celi(x);
      b=y*55;
      c=(a*17)*4;
      cout<<"Number of fioor tiles :"<<y<<"-->Price = "<<b<<endl;
      cout<<"Number of wall tiles :"<<a<<"-->Price = "<<c<<endl;
      cout<<"Total price :"<<b<<"+"<<b<<"="<<b+c<<"Bath";
      } 
    }
}
    while(x!=0);
system("pause");
return 0;
}
