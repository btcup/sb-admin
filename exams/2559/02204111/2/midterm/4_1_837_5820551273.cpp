////5820551273 Narupa luabunchoo

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,l,h,x;
char type;

cout<<"Type of (C)Car or (M)Motorcycle ";
cin>>type;
if (type== 'C')
            {
             cout<<"Arrival time :" ;
             cin>>a;
             cout<<"Leave time :";
             cin>>l;              
             if(a>l)
                                {
                                      cout<<"You can't leave before arrival time"<<endl;
                                }
             h = l-a;
             cout<<"hour = "<<h<<endl;
                         if(h<2 && a<l)
                                {
                                    cout<<"You have to pay 0 bath";
                                }
                         if(h>2 && h<=5 && a<l)
                                {
                                       x = (h-2)*30;
                                       cout<<"You have to pay"<< x <<"bath";
                                }
                          if(h>=6 && h<=8 && a<l)
                                 {
                                     x = (h-2)*50;
                                       cout<<"You have to pay"<< x <<"bath";
                                 }
                          if(h>8 && a<l)
                                 {
                                      cout<<"You have to pay 500 bath"; 
                                 }
           }
if (type == 'M')
         {
                                
             cout<<"Arrival time :" ;
             cin>>a;
             cout<<"Leave time :";
             cin>>l; 
             if(a>l)
                    {
                      cout<<"You can't leave before arrival time"<<endl;
                    }
             h = l-a;
             cout<<"hour = "<<h<<endl;
                           if(h<4 && a<l)
                                {
                                    cout<<"You have to pay 0 bath";
                                }
                         if(h>=4 && h<=7 && a<l)
                                {
                                       x = (h-3)*10;
                                       cout<<"You have to pay"<< x <<"bath"<<endl;
                                }
                          if(h>7 && a<l)
                                 {
                                      cout<<"You have to pay 150 bath"; 
                                 }
         }

system ("pause");
return 0;
}
