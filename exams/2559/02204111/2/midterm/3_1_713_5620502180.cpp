#include <iostream> //sittipong wongchang
using namespace std;
int main()
{
    float a,b,c,s,e;
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time";
    cin>>b;
    int d=(b-a);
    e=(((b-a)*100)-(d*100));
    cout<<d<<"hours and"<<e<<"minutes"<<"";
    if(b<a)
    cout<<"You can't leave before arrival time"<<endl;
    else {
         if(d<=3){
         cout<<"You have yo pay 0 bath";
         }
         else if (d>=4&&d<=6){
               s=d*20;
               cout<<"You have yo pay"<<s<<"bath";
               }
         else if (d>=7&&d<8){
               s=(d*20)-50;
               cout<<"You have yo pay"<<s<<"bath";
               }
         else if(d>8)
             cout<<"You have to pay 500 bath"<<endl;
    }
    system ("pause");
    return 0;
}
