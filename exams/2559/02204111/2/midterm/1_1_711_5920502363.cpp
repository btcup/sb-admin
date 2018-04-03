//5920502363 Thanakorn Samakkee
#include <iostream>
using namespace std;
int main ()
{
    char x;
    float d,y,a,fa,ai,mp;
    cout<<"------ Car lease calculator ---------"<<endl;
    cout<<"Enter car maoel : ";
    cin>>x; 
    cout<<"Enter number of years (1-6) : ";
    cin>>y;
    if (y>6)
    {
       cout<<"Error!,number of years is not in range"<<endl;
    }
    if (y>=4)
    {
    if (x=='A'&&y<=6)
    { 
       cout<<"Enter percenntage of down payment : ";
       cin>>d;
       cout<<"--------------------------------------"<<endl; 
       fa=(1385000-(1385000*(d/100)));
       cout<<"Financing amount : "<<fa<<endl;
       ai=(fa*2.09/100)*y;
       cout<<"Amount of interest : "<<ai<<endl;
       mp=(fa+ai)/(y*12);
       cout<<"Monthly payment : "<<mp<<endl;
    }
       if (x=='B'&&y<=6)
    { 
       cout<<"Enter percenntage of down payment : ";
       cin>>d;
       cout<<"--------------------------------------"<<endl; 
       fa=(511500-(511500*(d/100)));
       cout<<"Financing amount : "<<fa<<endl;
       ai=(fa*1.79/100)*y;
       cout<<"Amount of interest : "<<ai<<endl;
       mp=(fa+ai)/(y*12);
       cout<<"Monthly payment : "<<mp<<endl;
    }
       if (x=='C'&&y<=6)
    { 
       cout<<"Enter percenntage of down payment : ";
       cin>>d;
       cout<<"--------------------------------------"<<endl; 
       fa=(738000-(738000*(d/100)));
       cout<<"Financing amount : "<<fa<<endl;
       ai=(fa*1.99/100)*y;
       cout<<"Amount of interest : "<<ai<<endl;
       mp=(fa+ai)/(y*12);
       cout<<"Monthly payment : "<<mp<<endl;
    }
        if (x=='J'&&y<=6)
    { 
       cout<<"Enter percenntage of down payment : ";
       cin>>d;
       cout<<"--------------------------------------"<<endl; 
       fa=(694000-(694000*(d/100)));
       cout<<"Financing amount : "<<fa<<endl;
       ai=(fa*1.99)*y;
       cout<<"Amount of interest : "<<ai<<endl;
       mp=(fa+ai)/(y*12);
       cout<<"Monthly payment : "<<mp<<endl;
    }
    }
    if (y<4)
    {
    if (x=='A'&&y<=6)
    { 
       cout<<"Enter percenntage of down payment : ";
       cin>>d;
       cout<<"--------------------------------------"<<endl; 
       fa=(1385000-(1385000*(d/100)));
       cout<<"Financing amount : "<<fa<<endl;
       ai=(fa*2.08/100)*y;
       cout<<"Amount of interest : "<<ai<<endl;
       mp=(fa+ai)/(y*12);
       cout<<"Monthly payment : "<<mp<<endl;
    }
       if (x=='B'&&y<=6)
    { 
       cout<<"Enter percenntage of down payment : ";
       cin>>d;
       cout<<"--------------------------------------"<<endl; 
       fa=(511500-(511500*(d/100)));
       cout<<"Financing amount : "<<fa<<endl;
       ai=(fa*1.89/100)*y;
       cout<<"Amount of interest : "<<ai<<endl;
       mp=(fa+ai)/(y*12);
       cout<<"Monthly payment : "<<mp<<endl;
    }
       if (x=='C'&&y<=6)
    { 
       cout<<"Enter percenntage of down payment : ";
       cin>>d;
       cout<<"--------------------------------------"<<endl; 
       fa=(738000-(738000*(d/100)));
       cout<<"Financing amount : "<<fa<<endl;
       ai=(fa*1.89/100)*y;
       cout<<"Amount of interest : "<<ai<<endl;
       mp=(fa+ai)/(y*12);
       cout<<"Monthly payment : "<<mp<<endl;
    }
        if (x=='J'&&y<=6)
    { 
       cout<<"Enter percenntage of down payment : ";
       cin>>d;
       cout<<"--------------------------------------"<<endl; 
       fa=(694000-(694000*(d/100)));
       cout<<"Financing amount : "<<fa<<endl;
       ai=(fa*1.89)*y;
       cout<<"Amount of interest : "<<ai<<endl;
       mp=(fa+ai)/(y*12);
       cout<<"Monthly payment : "<<mp<<endl;
    }
    }
    system ("pause");
    return 0;

}
