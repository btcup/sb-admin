#include <iostream>
using namespace std;
int main()
{
    char typef,wall;
    float h,w,d;
    int sumf,sumw,numf,numw;
    cout<<"Welcom to The Fantastic Tiles!!\n";
    cout<<"Please enter room size in meter (HxWxD) : ";
    cin>>h >>w >>d;
    cout<<"Please select floor tile...(A/B/C) : ";
    cin>>typef;
    cout<<"Please select wall tile...(A/B/C) : ";
    cin>>wall;
    cout<<"------------------------------\n";
    h=h*100;
    w=w*100;
    d=d*100;
    if (typef=='A'||typef=='a')sumf=int(w*d)/(30*30)*55;
    else if(typef=='B'||typef=='b')sumf=int(w*d)/(45*45)*80;
    else if(typef=='C'||typef=='c')sumf=int(w*d)/(60*60)*90;
    if (typef=='A'||typef=='a')numf=int(w*d)/(30*30);
    else if (typef=='B'||typef=='b')numf=int(w*d)/(45*45);
    else if (typef=='C'||typef=='c')numf=int(w*d)/(60*60);
    cout<<"Number of floor tiles : "<<numf<<"-->Price = "<<sumf<<" Baht\n";
    if (wall=='A'||wall=='a')sumw=((int(w*h)*2+(h*d)*2)/(20*20))*17;
    else if(wall=='B'||wall=='b')sumw=((int(w*h)*2+(h*d)*2)/(20*30))*32;
    else if(wall=='C'||wall=='c')sumw=((int(w*h)*2+(h*d)*2)/(30*30))*50;
    if (wall=='A'||wall=='a')numw=(int(w*h)*2+(h*d)*2)/(20*20);
    else if (wall=='B'||wall=='b')numw=(int(w*h)*2+(h*d)*2)/(20*30);
    else if (wall=='C'||wall=='c')numw=(int(w*h)*2+(h*d)*2)/(30*30);
    cout<<"Number of wall tiles : "<<numw<<"-->Price = "<<sumw<<" Baht\n";
    cout<<"Totle price : "<<sumf<<" + "<<sumw<<" = "<<sumf+sumw<<" Baht\n"; 
    cout<<"------------------------------\n";
    system("pause");
    return 0;
}








