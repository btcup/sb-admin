#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"Welcome to the Fantastic tiles!! \n";
    double c,d,e,f=0,g=0,h=0,k=0,l=0,m=0,n=0,o=0,p=0;
    char a,b;
    cout<<"Please enter room size in meter (H x W x D) : ";
    cin>>c>>d>>e;
    cout<<"Please select floor tile... (A/B/C) : ";
    cin>>a;
    cout<<"Please select wall tile... (A/B/C) : ";
    cin>>b;
    cout<<"----------------------------------\n";
    if (a=='a'||a=='A')          //Floor
    {
       f=e/0.3;
       g=d/0.3;
       k=ceil(f)*ceil(g);
       h+=ceil(k)*55;
    }
    else if (a=='b'||a=='B')          //Floor
    {
       f=e/0.45;
       g=d/0.45;
       k=ceil(f)*ceil(g);
       h+=ceil(k)*80;
    }
    else if (a=='c'||a=='C')          //Floor
    {
       f=e/0.6;
       g=d/0.6;
       k=ceil(f)*ceil(g);
       h+=ceil(k)*90;
    }
       
       
    if (b=='a'||b=='A')          //wall
    {
       f=c/0.2;
       l=d/0.2;
       m=e/0.2;
       n=ceil(f)*ceil(l);  //wall
       p=ceil(f)*ceil(m);  //wall
       o=(n*2+p*2)*17;                      //wall
       
    }
    else if (b=='b'||b=='B')          //wall
    {
       f=c/0.2;
       l=d/0.3;
       m=e/0.3;
       n=ceil(f)*ceil(l);  //wall
       p=ceil(f)*ceil(m);  //wall
       o=(n*2+p*2)*32;                      //wall
    }
    else if (b=='c'||b=='C')          //wall
    {
       f=c/0.3;
       l=d/0.3;
       m=e/0.3;
       n=ceil(f)*ceil(l);  //wall                   
       p=ceil(f)*ceil(m);  //wall
       o=(n*2+p*2)*50;                      //wall
    }
    cout<<"Number of floor tiles : "<<k<<"-->price = "<<h<<" Baht\n";
    cout<<"Number of wall tiles : "<<(n*2+p*2)<<"-->price = "<<o<<" Baht\n";
    cout<<"Total price : "<<h<<" + "<<o<<" = "<<h+o<<" Baht\n";
    
    
    system ("pause");
    return 0 ;
}
