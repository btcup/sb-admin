#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char o,ut;
    float lc,la,ec,bc,ba,lt,x;
    
     cout<<"Enter objective (Utilization, Waste) : ";
     cin>>o;
     
     if (o=='U')
     { cout<<"Enter utilization type (Business, Agriculture) : ";
       cin>>ut;
       cout<<"Enter land cost (million) : ";
       cin>>lc;
       cout<<"Enter building cost (million) : ";
       cin>>bc;
       cout<<"Builind age : ";
       cin>>ba;
               if(ba>=1&&ba<=10) x=bc*(1.5/100*ba);
               if(ba>=11&&ba<=40) x=bc*(1.5/100*10+1.8/100*(ba-10));
               if(ba>=41) x=bc*70.8/100;
       
       
               ec=lc+x ;
               if (ut=='B')
               { if(lc<20) lt=ec*0.3/100;
                 if(lc>=20&&lc<50) lt=ec*0.5/100;
                 if(lc>=50) lt=ec*0.7/100;
                 }
               if (ut=='A')
               { if(lc<30) lt=lc;
                 if(lc>=30&&lc<60) lt=ec*0.06/100;
                 if(lc>=60) lt=ec*0.12/100;
                 }
    
      cout<<"Your estate cost is "<<ec<<" ("<<lc<<"+"<<x<<")"<<" million bath."<<endl;
      if (lt==lc) cout<<"The land tex is exempion."<<endl;
      else cout<<"The land tax is "<<lt<<" milion bath."<<endl;
     }
     
     if (o=='W')
     { cout<<"Enter land cost (million) : ";
       cin>>lc;
       cout<<"Enter land age : ";
       cin>>la;
               if(la>=1&&la<=3) lt=la;
               if(la>=4&&la<=6) lt=la*1.2/100;
               if(la>6) ec=la*2.4/100;
       cout<<"Your estate cost is "<<lc<<" million bath."<<endl;
       if (lt==la) cout<<"The land tex is exempion."<<endl;
       else cout<<"The land tex is "<<lt<<" million bath."<<endl;
       }
       
system ("pause");
return 0;

}          
