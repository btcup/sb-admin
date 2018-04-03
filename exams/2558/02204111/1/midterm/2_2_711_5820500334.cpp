#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char floor,wall;
    double h,w,d,area,n,m,m1,m2;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    for(int i = 0;i<3;i++){
    cout<<"Please enter room size in meter(H x W x D) : ";
    cin>>h>>w>>d;
    cout<<"Please select floor tile...(A/B/C): ";
    cin>>floor;
    cout<<"Please select wall tile...(A/B/C): ";
    cin>>wall;
    cout<<"---------------------------------"<<endl;
    switch(floor){
                  case 'a' : case 'A' : area=0.1;m=55;break;
                  case 'b' : case 'B' : area=0.3;m=80;break;
                  case 'c' : case 'C' : area=0.4;m=90;break;
                  }
    n=ceil(w)*ceil(d)/area;
    m1=n*m;
    cout<<"Number of floor tile : "<<n<<"-->Price = "<<m1<<" Bath"<<endl;
    switch(wall){
                 case 'a' : case 'A' : area=0.1;m=17;break;
                 case 'b' : case 'B' : area=0.1;m=32;break;
                 case 'c' : case 'C' : area=0.1;m=50;break;
                 }
    n=((ceil(w)*ceil(h))*2+(ceil(d)*ceil(h))*2)/area;
    m2=n*m;
    cout<<"Number of wall tile : "<<n<<"-->price = "<<m2<<" Bath"<<endl;
    cout<<"Total price : "<<m1<<" + "<<m2<<" = "<<m1+m2<<" Bath"<<endl;
    cout<<"---------------------------------"<<endl;
    }
    system("pause");
    return 0;
}
    
     
              
