#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    float H,W,D;
    char floor;
    char wall;
    int priceF,priceW,price,number,total,;
    cout<< " Welcome to The Fantastic Tiles!!"<<endl;
    cout<< " Please enter room size in meter (H x W x D) : ";
    cin>>H>>W>>D;
    cout<< " Please select floor tile...(A/B/C) :";
    cin>>floor;
    if(floor=='A'||floor=='a')
    {
    priceF=55;
    }
    if (floor=='B'||floor=='b')
    {
    priceF=80;
    }
    if (floor=='C'||floor=='c')
    {
    priceF=90;
    }
    cout<< " Please select wall tile...(A/B/C) :";
    cin>>wall;
    if(wall=='A'||wall=='a')
    {
    priceW=17;
    }
    if(wall=='B'||wall=='b')
    {
    priceW=32;
    }
    if(wall=='C'||wall=='c')
    {
    priceW=50;
    }
    cout<< " -------------------------------"<<endl;
    cout << " Number of floor tiles : " <<number<< "-->Price ="<<price <<" Baht " <<endl;
     number=W*D;
    price=priceF*number;
     cout << " Number of wall tiles : " <<number<< "-->Price ="<<price <<" Baht "<<endl;
     number=H*W;
    price=priceW*number; 
    cout << " Total price : "<<endl;
    system ("pause");
    return 0;
}
    
    
