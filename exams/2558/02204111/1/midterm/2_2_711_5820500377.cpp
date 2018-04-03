#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float h,w,d,sum=0,nfloor=0,nwall=0,Pricefloor=0,Pricewall=0;
    char a,b;
    cout<<"Welcome to The Fantastice Tiles!!"<<endl;
    cout<<"Please enter room size in meter(H x W x D): ";
    cin>>h>>w>>d;
    cout<<"Please select floor tile...(A/B/C): ";
    cin>>a;
    if(a=='a'||a=='A')
    {
                      nfloor=(ceil(w*d))/(30*30)*pow(10,-4);
                      Pricefloor=nfloor*55;
                      }
    if(a=='b'||a=='B')
    {
                      nfloor=(ceil(w*d))/(45*45)*pow(10,-4);
                      Pricefloor=nfloor*80;
                      }
    if(a=='c'||a=='C')
    {
                      nfloor=(ceil(w*d))/(60*60)*pow(10,-4);
                      Pricefloor=nfloor*90;
                      }
    cout<<"Please select wall tile...(A/B/C): ";
    cin>>b;
    if(b=='a'||a=='A')
    {
                      nwall=((ceil(h*w))*2)+((ceil(w*d)*2)/(20*20)*pow(10,-4);
                      Pricewall=nwall*17;
                      }
    if(b=='b'||a=='B')
    {
                      nwall=((ceil(h*w))*2)+((ceil(w*d)*2)/(20*30)*pow(10,-4);
                      Pricewall=nwall*32;
                      }
    if(b=='c'||a=='C')
    {
                      nfloor=((ceil(h*w))*2)+((ceil(w*d)*2)/(30*30)*pow(10,-4);
                      Pricewall=nwall*50;
                      }
                      cout<<"-----------------------------------------------------"<<endl;
                      cout<<"Number of floor tiles :"<<nfloor<<"-->Price = "<<Pricefloor<<" Baht"<<endl;
                      cout<<"Number of wall tiles :"<<nwall<<"-->Price = "<<Pricewall<<" Baht"<<endl;
                      cout<<"Total price : "<<Pricefloor<<" + "<<Pricewall<<" = "<<Pricefloor+Pricewall<<" Baht"<<endl;
                      system("pause");
    return 0;
}
