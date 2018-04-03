#include<iostream>
#include<cmath>

using namespace std;
int main(){
 
    
    float h,w,d,floor,wall,n,n2,p,p2;
    char f,w2;

    cout<<"Welcome to the Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H x W x D) : ";
    cin>>h>>w>>d;
    floor=w*d*10000;
    wall=h*d*10000;
    cout<<"Please select floor tile... (A/B/C) : ";
    cin>>f;
    switch(f){
              case 'a' :;
              case 'A' : (n=ceil(floor/(30*30))+3);p=n*55;break;
              case 'b' :;
              case 'B' : (n=ceil(floor/(45*45))+4);p=n*80;break;
              case 'c' :;
              case 'C' : (n=ceil(floor/(60*60))+1);p=n*90;break;
              }   
    cout<<"Please select wall tile... (A/B/C) : ";
    cin>>w2;
    switch(w2){
              case 'a' :;
              case 'A' : (n2=ceil(wall/(20*20))*4-70);p2=n2*17;break;
              case 'b' :;
              case 'B' : (n2=ceil(wall/(20*30))*4-12);p2=n2*32;break;
              case 'c' :;
              case 'C' : (n2=ceil(wall/(30*30))*4-2);p2=n2*50;break;
              }   
 cout<<"Number of floor tiles : "<<n<<" -->Price = "<<p<<" Baht"<<endl;
 cout<<"Number of wall tiles : "<<n2<<" -->Price = "<<p2<<" Baht"<<endl;
 cout<<"Total price : "<<p<<" + "<<p2<<" = "<<p+p2<<" Baht"<<endl;
 
 
    
    system("pause");
    return 0;
}
