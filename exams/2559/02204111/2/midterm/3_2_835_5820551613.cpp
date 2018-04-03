// 5820551613 Tanut petchan
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float a,b,c,d,e,m,n;
    //int  sum;
         do
         { cout << "Enter electricity cost per unit (baths) :";
           cin >> a;
         } while(a<=0);
         do {
                       cout << "Enter last unit :";
                       cin >> b;
                         if ( b!=-1) 
                        
                         { cout <<"Enter current unit :";
                           cin >> c;
                                 if (c!=-1 ) 
                                 {         e = c-b;
                                           m  = e*a;
                                           //n=sum+m;
                                           if(e>0)
                                           { cout<<" Units used = "<<e<<endl;
                                             cout <<" Electricity charge (baths) = "<< m <<endl;
                                           } 
                                            else if(e<=0)
                                            {cout<<" Invalid current unit! "<<endl;}
                                   }
                                   else if (c ==-1  )
                                   { cout << " -- End of Calculation -- " <<endl;
                                     cout << " Total of Electricity charge (baths) = " << m<<endl;}
                           }
                          
                           else 
                           { cout << " -- End of Calculation -- "<<endl;
                             cout << " Total of Electricity charge (baths) = "<< m <<endl;
                           }
    }while(b!=-1);
    
    
    
    
    
    
    system ("pause");
    return 0;
}
