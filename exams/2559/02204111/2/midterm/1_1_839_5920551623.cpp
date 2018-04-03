//5920551623 Saharath Saeangwilai
#include <iostream>
using namespace std;
int main()
{
    float x,y,z,q,r,s;
    char a,b;
    cout<<"Type of vehicle ((C)car or (M)Motorcycle): ";
    cin>>a;
    if (a=='M')
    {
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    cout<<endl;
       if(x>y){
        cout<<"You can't leave before arrival time"<<endl;}
       else if(x<y){ 
    q=int(y)-int(x);
    r=y-x;
    int (s)=(q-r)*(-100);
    cout<<q<<" hours and "<<s<<" minutes"<<endl;
        if(q<=2){
        z=0;}
          if(q>2&&q<=5){
          z=q*30;}
             if(q>6&&q<=8){
             z=q*50;}
                 if(q>8){
                 z=500;}          
    cout<<"You have to pay "<<z<<" bath"<<endl;
    }
    }
    if (a=='C')
    {
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    cout<<endl;
       if(x>y){
        cout<<"You can't leave before arrival time"<<endl;}
    else if(x<y){
    q=int((y)-int(x)-1);
    r=y-x;
    int(s)=(q-r)*(-100)+60-100;
    cout<<q<<" hours and "<<s<<" minutes"<<endl;
        if(q<=3){
        z=0;}
            if(q>3&&q<=7){
            z=(q+1)*30;}
                  if(q>7){
                  z=500;}
    cout<<"You have to pay "<<z<<" bath"<<endl;
    }
    }
    
    system ("pause");
    return 0;
}
