#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    float h,w,d;
    char floor,wall;
    
    cout<<"Welcome to The Fantastic Thiles!!"<<endl;
    cout<<"Please enter room size in meter (H*W*D) : ";
    cin>>h>>w>>d;
    cout<<"please select floor title... (A/B/C) : ";
    cin>>floor;
    cout<<"please select floor title... (A/B/C) : ";
    cin>>wall;
    cout<<"--------------------------------------------"<<endl;
    
     y =(((((((h+0.1)*100)/20)*(((w*100)/30))*2)))+((((((h+0.1)*100)/20)*(((d+0.1)*100)/30))*2)));
    x =(((w*100)/30)*(((d+0.1)*100)/30));
   
    cout<<"Number of floor tiles :"<<x<<"-->Price = "<< x*55<<endl;
    cout<<"Number of wall tiles :"<<y<<"-->Price = "<< y*32<<endl;
    cout<<"Total price : "<<x*55<<"+"<<y*32<<" = "<<(x*55)+(y*32)<<endl;
    cout<<"--------------------------------------------"<<endl;
    
     cout<<"Welcome to The Fantastic Thiles!!"<<endl;
    cout<<"Please enter room size in meter (H*W*D) : ";
    cin>>h>>w>>d;
    cout<<"please select floor title... (A/B/C) : ";
    cin>>floor;
    cout<<"please select floor title... (A/B/C) : ";
    cin>>wall;
    cout<<"--------------------------------------------"<<endl;
    
     y =((((((h*100)/30)*((((w+0.1)*100)/30))*2)))+(((((h*100)/30)*((d*100)/30))*2)));
    x =((((w+0.1)*100)/45)*((d*100)/45));
   
    cout<<"Number of floor tiles :"<<x<<"-->Price = "<< x*80<<endl;
    cout<<"Number of wall tiles :"<<y<<"-->Price = "<< y*50<<endl;
    cout<<"Total price : "<<endl;
    cout<<"--------------------------------------------"<<endl;
    
    
system ("pause");
return 0;
}
