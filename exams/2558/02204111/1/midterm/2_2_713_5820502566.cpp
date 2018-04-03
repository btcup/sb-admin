#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double h,w,d,x1,x2,x3,x4,y1,y2;
    int e1,e2,p1,p2,t;
    char f,i;
    cout<<"Welcome to the Fantastic Tiles!!"<<endl;
    cout<<"Plese enter room size in meter (H x W x D) : ";
    cin>>h>>w>>d;
    cout<<"Plese select floor tile...(A/B/C) : ";
    cin>>f;
    cout<<"Plese select wall tile...(A/B/C) : ";
    cin>>i;
    
    if(f=='a'||f=='A'){x1=30;x2=30; y1=55;}
    else if(f=='b'||f=='B'){x1=45;x2=45; y1=80;}
    else if(f=='c'||f=='C'){x1=60;x2=60; y1=90;}
    
    if(i=='a'||i=='A'){x3=20;x4=20; y2=17;}
    else if(i=='B'||i=='b'){x3=20;x4=30; y2=32;}
    else if(i=='c'||i=='C'){x3=30;x4=30; y2=50;}
    
    e1=ceil((w*100)/x1)*ceil((d*100)/x2);
    p1=e1*y1;
    e2=(ceil((h*100)/x3)*ceil((w*100)/x4))*2+(ceil((h*100)/x3)*ceil((d*100)/x4))*2;
    p2=e2*y2;
    t=p1+p2;
    
    cout<<"Number of floor tiles : "<<e1<<"-->Price = "<<p1<<"Baht"<<endl;
    cout<<"Number of wall tiles : "<<e2<<"-->Price = "<<p2<<"Baht"<<endl;
    cout<<"total price : "<<p1<<" + "<<p2<<" = "<<t<<"Baht"<<endl;
    
    system("pause");
    return 0;
}
