#include <iostream>
using namespace std;
int main()
{
    float h,w,d;
    int total=0,x,y,sum=0,mum=0;
    char floor,wall;
    cout<<"Welcome to the fantastic tiles!!"<<endl;
    
    cout<<"Plase enter room size in meter (H x W x D) ; ";
    cin>>h>>w>>d;
    cout<<"Plase select floor tile... (A/B/C) :";
    cin>>floor;
    cout<<"Plase select wall tile... (A/B/C) :";
    cin>>wall;
    
    
    if(floor=='A'||floor=='a')
    {
         cout<<"Number of floor title :";
         cin>>x;sum=x*55;cout<<"--> Price = "<<sum<<endl;
    } 
    if(floor=='B'||floor=='b')
    {
         cout<<"Number of floor title :";
         cin>>x;sum=x*80;cout<<"--> Price = "<<sum<<endl;
    }                                          
     if(floor=='C'||floor=='c')
    {
         cout<<"Number of floor title :";
         cin>>x;sum=x*90;cout<<"--> Price = "<<sum<<endl;
    } 
     if(wall=='A'||wall=='a')
    {
         cout<<"Number of wall title :";
         cin>>y;mum=y*17;cout<<"--> Price = "<<mum<<endl;
    }     
    if(wall=='B'||wall=='b')
    {
         cout<<"Number of wall title :";
         cin>>y;mum=y*32;cout<<"--> Price = "<<mum<<endl;
    }  
    if(wall=='C'||wall=='c')
    {
         cout<<"Number of wall title :";
         cin>>y;mum=y*50;cout<<"--> Price = "<<mum<<endl;
    }     
    cout<<"Total price :"<<sum<<"+"<<mum<<" = " <<sum+mum<<"Bath"<<endl;

    

system("pause");
return 0;
}
