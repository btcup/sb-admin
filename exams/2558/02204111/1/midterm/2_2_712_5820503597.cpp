#include<iostream>
using namespace std;
int main()
{
    char q,w;
    float x,y,z,pay,tile;
    cout<<"Welcome to the fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H x W x D) :";
    cin>>x>>y>>z;
    cout<<"Please select floor tile...(A/B/C) :";
    cin>>q; 
    cout<<"Please select wall tile...(A/B/C) :";
    cin>>w;
    cout<<"-----------------------------"<<endl;
    {
    if(q=='a'||q=='A')
     pay=55*tile;
    else if(q=='b'||q=='B')
     pay=80*tile;
    else if(q=='c'||q=='C')
     pay=90*tile
     }
     {
     if(w=='a'||w=='A')
     pay=17*tile;
    else if(w=='b'||w=='B')
     pay=32*tile;
    else if(w=='c'||w=='C')
     pay=50*tile
     }
    
    system("pause");
    return 0;
}
    

