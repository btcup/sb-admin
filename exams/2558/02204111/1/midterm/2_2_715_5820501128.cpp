#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float h,w,d,x,y,m,n;
    char f,k;
    cout<<"Welcome to The Fantastic Tile!!"<<endl;
    cout<<"Please enter room size in meter (H x W x D) : "; cin>>h>>w>>d;
    cout<<"Please select floor tile... (A/B/C) : "; cin>>f;
    cout<<"Please select wall tile... (A/B/C) : "; cin>>k;
    cout<<"------------------------------\n";
    if(f=='a'||f=='A')
    {                  x=ceil(w/0.3)*ceil(d/0.3); y=55*x;
                      cout<<"Number of floor tiles :"<<x<<"-->Price = "<<y<<endl;}
    if(f=='b'||f=='B')
                      {x=ceil(w/0.45)*ceil(d/0.45); y=80*x;
                      cout<<"Number of floor tiles :"<<x<<"-->Price = "<<y<<endl; }                                                 
    if(f=='c'||f=='C')
                      {x=ceil(w/0.6)*(d/0.6); y=90*x;
                      cout<<"Number of floor tiles :"<<x<<"-->Price = "<<y<<endl;}
    if(k=='a'||k=='A')
                      {m=ceil((2*h*w)/(0.20*0.20)+(2*h*d)/(0.20*0.20)); y=17*m;
                      cout<<"Number of wall tiles :"<<m<<"-->Price = "<<n<<endl;}
    if(k=='b'||k=='B')
                      {m=ceil((2*h*w)/(0.20*0.30)+(2*h*d)/(0.20*0.30)); n=32*m; 
                      cout<<"Number of wall tiles :"<<m<<"-->Price = "<<n<<endl;}  
    if(k=='c'||k=='C')
                      {m=ceil((2*h*w)/(0.30*0.30)+(2*h*d)/(0.30*0.30)); n=50*m;   
                      cout<<"Number of wall tiles :"<<m<<"-->Price = "<<n<<endl;}
    cout<<"Total price : "<<y<<" + "<<n<<" = "<<y+n<<" Baht\n";
    system("pause");
    return 0;
}

                               
