#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float h,w,d,x,y,z,sum,e,f;
    char a,b;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H x W x D) : ";
    cin>>h>>w>>d;
    cout<<"Please select floor tile... (A/B/C) :";
    cin>>a;
    cout<<"Please slease wall title...(A/B/C) :";
    cin>>b;
    cout<<"--------------------------------------------"<<endl;
    x=(w*d)*10;
    y=(h*d)*10;
    z=(h*w)*10;
    sum=(2*y)+(2*z);
    if(a=='A'||a=='a')
    {
       d=x*55;
       cout<<"Number of floor titles : "<<x<<" --> price = "<<d<<" Bath "<<endl;
       if(b=='A'||b=='a')
       {
           e=sum*17;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
        else if(b=='B'||b=='b')
       {
           e=sum*32;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
       else if(b=='C'||b=='c')
       {
           e=sum*50;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
    }
     else if(a=='B'||a=='b')
    {
       d=x*80;
       cout<<"Number of floor titles : "<<x<<" --> price = "<<d<<" Bath "<<endl;
       if(b=='A'||b=='a')
       {
           e=sum*17;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
        else if(b=='B'||b=='b')
       {
           e=sum*32;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
       else if(b=='C'||b=='c')
       {
           e=sum*50;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
    }
     else if(a=='C'||a=='c')
    {
       d=x*90;
       cout<<"Number of floor titles : "<<x<<" --> price = "<<d<<" Bath "<<endl;
       if(b=='A'||b=='a')
       {
           e=sum*17;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
        else if(b=='B'||b=='b')
       {
           e=sum*32;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
       else if(b=='C'||b=='c')
       {
           e=sum*50;
           cout<<"Number of wall title : "<<sum<<" --> price = "<<e<<" Bath "<<endl;
       }
    }
    cout<<"Totle price :"<<d<<" + "<<e<<" = "<<(d+e)<<" Bath";
    system("pause");
    return 0;
}
