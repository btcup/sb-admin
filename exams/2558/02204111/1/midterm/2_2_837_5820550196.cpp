#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x,y,floor=0,wall=0;
    float h,w,d,sum=0,ft,wt;
    char n,m;
    cout<<"Welcome to The Fantastic Tiles !!"<<endl;
    cout<<"Please enter room size in meter (H x W x D) : ";
    cin>>h>>w>>d;
    cout<<"Please select floor tile... (A/B/C) : ";
    cin>>n;
    if(n=='A'||n=='a')
    { x = 55; }
    else if(n=='B'||n=='b')
    { x = 80; }
    else if(n=='C'||n=='c')
    { x = 90; }
    cout<<"Please select wall tile... (A/B/C) : ";
    cin>>m;
    if(m=='A'||m=='a')
    { y = 17; }
    else if(m=='B'||m=='b')
    { y = 32; }
    else if(m=='C'||m=='c')
    { y = 50; }
    cout<<"--------------------------------------------"<<endl;
    floor = ((h*4)+(w*2)*(d*2))*2;
    ft = x*floor;
    cout<<"Number of select floor tile : "<<floor<<"--> Price = "<<ft<<endl;
    wall = ((h*4)*((d*2)*(w*2)));
    wt = y*wall;
    cout<<"Number of select wall tile : "<<wall<<"--> Price = "<<wt<<endl;
    cout<<"Total Price : "<<wt<<" + "<<ft<<" = "<<wt+ft<<" Baht"<<endl;
    system ("pause");
    return 0;
}
    
