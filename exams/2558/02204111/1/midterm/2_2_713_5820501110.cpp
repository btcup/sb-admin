#include <iostream>
using namespace std;
int main ()
{
    char A,a,B,b,C,c,wa,flr;
    int h,w,d,pa,pb,pc;
    float va,vb,vc;
    cout << "Welcome to The Fantastic Tiles!!" << endl;
    cout << "Please enter room size in meter (H x W x D) : ";
    cin >> h >> w >> d ;
    cout << "Please select floor tile. . .(A/B/C): ";
    cin >> flr ;
    if (flr=='A' || flr=='a')
       { va = 0.3*0.3  ;
         pa = 55  ;
       }
    else if (flr=='B' || flr=='b')
       { vb = 0.45*0.45 ;
         pb = 80  ;
       }        
    else { vc = 0.6*0.6 ;
           pc = 90 ;
         }   
    cout << endl;
    cout << "Please select wall tile. . .(A/B/C): ";
    cin >> wa ;
    if (wa=='A' || wa=='a')
       { va = 0.2*0.2  ;
         pa = 17  ;
       }
    else if (wa=='B' || wa=='b')
         { vb = 0.2*0.3 ;
           pb = 32 ;
         }
    else { vc = 0.3*0.3 ;
           pc = 50 ;
         }
   cout << endl;
   cout << " - - - - - - - " << endl;
   cout << "Number of floor tile : " ;
   cout << "Number of wall";
   
  system ("pause");
  return 0 ;
}
        
