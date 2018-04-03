#include<iostream> //5920501049 Yanisa Kachapat
using namespace std;
int main()
{
    char a;
    double b,c,Bath;
    int hour,minute,x,y,z;
    cout<<"Type of vehicle ((C)car or (M)Motorcycle): ";
    cin>>a;
    cout<<"Arrival time: ";
    cin>>b;
    cout<<"Leave time: ";
    cin>>c;
    x=(60*int(b))+((b-int(b))*100);
    y=(60*int(c))+((c-int(c))*100);
    z=y-x;
    hour=z/60;
    minute=z%60;
    cout<<hour<<" hours and "<<minute<<" minutes"<<endl;
    if(a=='C')
    {
              if(hour>0&&hour<=2)
              Bath=0;
              else if(hour>=3&&hour<=5)
              Bath=30*hour;
              else if (hour>=6&&hour<=8)
              Bath=50*hour;
              else 
              Bath=500;
    }
    else if(a=='M')
    {
              if(hour>0&&hour<=3)
              Bath=0;
              else if(hour>=4&&hour<=7)
              Bath=10*hour;
              else 
              Bath=150;
    }
    cout<<"You have to pay "<<Bath<<" bath"<<endl;
system("pause");
return 0;
}
