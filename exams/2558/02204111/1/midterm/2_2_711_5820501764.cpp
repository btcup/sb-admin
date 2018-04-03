#include <iostream>
using namespace std;
int main ()
{
    double AA,h,w,d,area_floor,area_wall; 
    char floor,wall; 
    int n,m,price_f,price_w;
        cout<<"Welcome to The Fantastic Tiles!!\n";
        cout<<"Please enter room size in meter (H x W x D) :";
        cin>>h>>w>>d;
        cout<<"Please select floor tile... (A/B/C) :";
        cin>>floor;
        cout<<"Please select wall tile... (A/B/C) :";
        cin>>wall;
        cout<<"------------------------------------------\n";
        area_floor=w*d;
        area_wall=2*(h*(w+d));
        if (floor=='a'||floor=='A')
        {
             AA=0.3*0.3;
             n=1;
             while (AA*n<area_floor)
             {
                   n++;
             }
             price_f=n*55;
        }    
        else if (floor=='b'||floor=='B')
        {
             AA=0.45*0.45;
             n=1;
             while (AA*n<area_floor)
             {
                   n++;
             }
             price_f=n*80;
        }    
        else if (floor=='c'||floor=='C')
        {
             AA=0.6*0.6;
             n=1;
             while (AA*n<area_floor)
             {
                   n++;
             }
             price_f=n*90;
        } 
           
        if (wall=='a'||wall=='A')
        {
             AA=0.2*0.2;
             m=1;
             while (AA*m<area_wall)
             {
                   m++;
             }
             price_w=m*17;
        }    
        else if (wall=='b'||wall=='B')
        {
             AA=0.2*0.3;
             m=1;
             while (AA*m<area_wall)
             {
                   m++;
             }
             price_w=m*32;
        }    
        else if (wall=='c'||wall=='C')
        {
             AA=0.3*0.3;
             m=1;
             while (AA*m<area_wall)
             {
                   m++;
             }
             price_w=m*50;
        }    
        cout<<"Number of floor tiles :"<<n<<"-->Price = "<<price_f<<" Baht\n";
        cout<<"Number of wall tiles :"<<m<<"-->Price = "<<price_w<<" Baht\n";
        cout<<"Total price : "<<price_f<<" + "<<price_w<<" = "<<price_f+price_w<<" Baht\n";
        system ("pause");
        return 0;
}
        
