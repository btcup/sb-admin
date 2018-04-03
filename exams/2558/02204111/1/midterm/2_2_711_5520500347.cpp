#include<iostream>
using namespace std;
int main ()
{
    
    float h,w,d;
    char a,b,c,A,B,C,floor,wall;
    double floor1,price,wall1,price1;
    int p,q,i;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H x W x D) :";
    cin>>h>>w>>d;
    
    cout<<"Please select floor tile...(A/B/C) :";
    cin>>floor;
    if(floor=='a'||floor=='A')
    {
    floor1=((w*d)/(0.3*0.3))+1;
    price=floor1*55;
    }
    else if(floor=='b'||floor=='B')
    {
    floor1=((w*d)/(0.45*0.45))+1;
    price=floor1*80;
    }
    else if(floor=='c'||floor=='B')
    {
    floor1=((w*d)/(0.6*0.6))+1;
    price=floor1*90;
    }
   
    cout<<"Please select wall tile...(A/B/C):";
    cin>>wall;
    if(wall=='a'||wall=='A')
    {
    wall1=(((h*d/(0.2*0.2))*2)+((h*w/(0.2*0.2))*2))+1;
    price1=wall1*17;
    }
    else if(wall=='b'||wall=='B')
    {
    wall1=(((h*d/(0.2*0.3))*2)+((h*w/(0.2*0.3))*2))+1;
    price1=wall1*32;
    }
    else if(wall=='c'||wall=='B')
    {
    wall1=(((h*d/(0.3*0.3))*2)+((h*w/(0.3*0.3))*2))+1;
    price1=wall1*50;
    }
   q=int(price1)+int(price);
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
    cout<<"Numbe of floor tiles :"<<int(floor1)<<"-->Price = "<<int(price)<<" Baht"<<endl;
    cout<<"Numbe of wall tiles :"<<int(wall1)<<"-->Price = "<<int(price1)<<" Baht"<<endl;
    cout<<"Total price : "<<int(price1)<<"+"<<int(price)<<"="<<q<<" Baht"<<endl;

       system ("pause");
    return 0;
}
