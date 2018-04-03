//sirapob termpan 5820502507
#include<iostream>
using namespace std;
int main()
{
     float a,b,c,d,e;
     int i=0;
     while(i<3)
     {
     cout<<"enter electricity cost per unit (bahts) : ";
     cin>>a;
     cout<<"enter last unit : ";
     cin>>b;
     cout<<"enter current unit : ";
     cin>>c;
     d=(c-b);
     cout<<"units used = "<<d<<endl;
     e=d*a;
     cout<<"eletricity charge (bath)= "<<(e)<<endl;
     i++;}
    
     
    system("pause");
    return 0;
}
