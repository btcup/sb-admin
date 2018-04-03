#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    float H,W,D,baht;
    char floor,wall;
    do
    {
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H x W x D) : ";
    cin>>H>>W>>D;
    cout<<"Please select floor tile... (A/B/C): ";
    cin>>floor;
    cout<<"Please select wall tile... (A/B/C): ";
    cin>>wall;
    cout<<"----------------------------------------"<<endl;
    if(floor=='A'||floor=='a')
    {
                              floor==55;wall==17;baht++;
    }
    if(floor=='B'||floor=='b')
    {
                              floor==80;wall==32;baht++;
    }
    if(floor=='C'||floor=='c')
    {
                              floor==90;wall==50;baht++;
    }
    
    cout<<"Number of wall tiles : "<<baht<<"-->"<<"Price"<<" = "<<baht<<"Baht"<<endl;                        
    cout<<"Number of floor tiles : "<<baht<<"-->"<<"Price"<<" = "<<baht<<"Baht"<<endl;
    
    }
    while(1);
    system("pause");
    return 0;
}
