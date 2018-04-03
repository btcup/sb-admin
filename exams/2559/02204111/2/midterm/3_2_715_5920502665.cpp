//5920502665 Jeramate Ninnoree
#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    int a,b,c;
    cout<<"Enter electricity cost per unit (bahts) :";
    cin>> x;
    while(x<=0){
               cout<<"Enter electricity cost per unit (bahts) :";
               cin>>x; 
               }
    cout<<"Enter last unit:";
    cin>>a;
    while(a<0){cout<<"--End of Calculation--";break;}
    while(a>0&&a>100000){cout<<"Invalid last unit!"<<endl;
    cout<<"Enter last unit:";
    cin>>a;}
    cout<<"Enter current unit:";   
    cin>>b;
   c = b-a;
    if(c<0){cout<<"Invalid current unit!";}
    if (c>0){
    cout<<"Units used ="<<c<<endl;}
    y=x*c;
    if(y!=0){
    cout<<"Electricity charge (bahts)="<<y<<endl;}
    while(a!=-1){cout<<"Enter last unit:";
    cin>>a;
    while(a<0){cout<<"--End of Calculation--";break;}
    while(a>0&&a>100000){cout<<"Invalid last unit!"<<endl;
    cout<<"Enter last unit:";
    cin>>a;}
    cout<<"Enter current unit:";   
    cin>>b;
    if(b<0){cout<<"Invalid current unit!";}
   c = b-a;
    if(c<0){cout<<"Invalid current unit!";}
    if (c>0){
    cout<<"Units used ="<<c<<endl;}
    y=x*c;
    if(y!=0){
    cout<<"Electricity charge (bahts)="<<y<<endl;}}
    system("pause");
    return 0;
}
