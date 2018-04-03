#include<iostream>
using namespace std;
int main()
{
    float h,w,d;char x,y;int wa,f,wt,ft,pf,pw;
    cout<<"welcom to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in the meter (H x W x D):";
    cin>>h>>w>>d;
    f=w*d;
    wa=(2*h*w)+(2*h*d);
    cout<<"Please select floor tile...(A/B/C):";
    cin>>x;
    if(x=='a'||x=='A')
    {ft=f/(0.3*0.3);pf=ft*55;}
    else if(x=='b'||x=='B')
    {ft=f/(0.45*0.45);pf=ft*80;}
    else if(x=='c'||x=='C')
    {ft=f/(0.6*0.6);pf=ft*90;}
    cout<<"Please select wall tile...(A/B/C):";
    cin>>y;
    if(y=='a'||y=='A')
    {wt=wa/(0.2*0.2);pw=wt*17;}
    else if(y=='b'||y=='B')
    {wt=wa/(0.2*0.3);pw=wt*32;}
    else if(y=='c'||y=='C')
    {wt=wa/(0.3*0.3);pw=wt*50;}
    cout<<"Number of floor tiles :"<<ft<<"-->Price ="<<pf <<" Baht"<<endl;
    cout<<"Number of wall tiles :"<<wt<<"-->Price ="<<pw <<" Baht"<<endl;
    cout<<"Total price :"<< pw <<"+"<< pf <<"="<<pf+pw<<" Baht"<<endl;
    system("pause");
    return 0;
}
    
