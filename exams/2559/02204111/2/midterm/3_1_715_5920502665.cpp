//5920502665Jeramate Ninnoree
#include<iostream>
using namespace std;
int main (){
    double a,b,t,q;
    int f,y,z,x;
    cout<<"Arrival time:";
    cin>> a;
    cout<<"Leave time:";
    cin>> b;
    t=a+b;
    100*t = y;
    y%100=z;
    x=y-z;
    q=x*0.01;
    cout<<q<<"hours and"<<z<<"minutes"<<endl;
    if(q<=3){cout<<"You have to pay 0 baht"};
    if(z>=15){q=q+1;};
    system("pause");
    return 0;
}
    
