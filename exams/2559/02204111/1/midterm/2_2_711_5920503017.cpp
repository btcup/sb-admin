#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    char a,b,c,d;
    double x,y,z,i,s;
    cout<<"Enter objective (Utilization, Waste) : ";
    cin>>a;
    if(a == 'U')
     {
         cout<<"Enter utilization type (Business, Arriculture) : ";
     }
     cin>>b;
     if(b == 'B'){
      {
          cout<<"Enter land cost  (million) : " ;
      }
      cin>>x;
      if(x<20)
      {
             x =x*103/100;
      }
        else if (x>=20&&x<50)      
        {
            x = (x*0.5)/100;
        }
        else if (x>=50)
        {
             x = (x*0.7)/100;
        }
        else if (b == 'A')
        cin>>z;
        if(z<30)
         {
                       z = z*1;
         }
         else if(z>=30&&z<60) 
         {
              z = z*1.2/100;    
         }
          else if (y>=60)   
          {
               z = z*0.12/100;
          }
        
        cout<<"Enter building cost (millin): ";
        cin>>i;
        }
        cout<<"Building age : ";
        cin>>y;
        if(y>=1&&y<=10)
         {
                       y = (y*1.5)/100;
         }
         else if(y>=11&&y<=40) 
         {
              y = (y*1.8)/100;    
         }
          else if (y>=41)   
          {
               y = (y*70.8)/100 ;
          }         
      cout<<"Your estate cost is"<<x<<"+"<<y<<"million bath"<<endl;
      cout<<"The land tax is"<<x+y<<"million bath"<<endl;
      system("pause");
      return 0;
          }
