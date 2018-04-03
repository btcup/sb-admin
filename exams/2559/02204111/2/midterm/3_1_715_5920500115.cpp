//5920500115 Thanapol Chantaravaranon
#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    double tin,tout;
    int h,m,c,ain,aout;
    cout<<"Arrival time : ";
    cin>>tin;
    cout<<"Leave time : ";
    cin>>tout;
    cout<<endl;
    
    h=int(((tout*100)-(tin*100))/100);
    m=int((int(tout)*60)+((tout-int(tout))*100)-((int(tin)*60)+((tin-int(tin))*100)))%60;
    if(tin<tout)
    cout<<h<<" hours and "<<m<<" minutes"<<endl;
    if((tout-tin)<3.15)
    c=0;
    else if((tout-tin)<4.15)
    c=20;
    else if((tout-tin)<5.15)
    c=40;
    
    else if((tout-tin)>7.15&&(tout-tin)<8.15)
    c=160;
    else if((tout-tin)>8.15)
    c=500;
    if(tin<tout)
    cout<<"You have to play "<<c<<" bath"<<endl;
    if(tin>=tout)
    cout<<"You can't leave before arrival time";
system("pause");
return 0;
}
