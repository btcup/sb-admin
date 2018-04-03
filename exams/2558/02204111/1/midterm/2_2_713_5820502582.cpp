#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    float H,W,D,sizeH,sizeW,sizeD,size,tile,tile1,totalwall,totalf;
    char f,wall;
    cout << "Welcome to the Fantastic Tiles!!" << endl;
    cout << "Please enter room size in meter (H x W x D) : ";
    cin >> H >> W >> D;
    cout << "Please select floor tile... (A/B/C): ";
    cin >> f;
    cout << "Please select wall tile... (A/B/C): ";
    cin >> wall;

    sizeH=ceil(H);
    sizeW=ceil(W);
    sizeD=ceil(D);

    if(f=='a'||f=='A')
    {
     tile=55;
    }
    if(f=='B' || f=='b')
    {
     tile=80;
    }
    if(f=='C' || f=='c')
    {
     tile=90;
     }
     totalf=sizeW*sizeD*10;
    cout << "Number of floor tile: " << totalf << "-->Price = " << totalf*tile << " Bath" << endl;
    
    if(wall=='a'||wall=='A')
    {
     tile1=17;
    }
    if(wall=='B' || wall=='b')
    {
     tile1=32;
    }
    if(wall=='C' || wall=='c')
    {
     tile1=50;
     } 
     totalwall=(sizeH*sizeW*2)*10+(sizeH*sizeD*2)*10;
     cout << "Number of wall tile : " << totalwall << "-->Price = " << totalwall*tile1 << "Bath" << endl;
     cout<< "Total price : " << totalf*tile << "+" << totalwall*tile1 << " = " << (totalf*tile)+totalwall*tile1 << " Bath";
    
    system ("pause");
    return 0;
}
    
                                
                      
                      
                
    
