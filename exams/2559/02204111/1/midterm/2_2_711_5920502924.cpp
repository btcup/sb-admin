#include <iostream> //5920502924 Suparat Jittithammawat
#include <cmath>
using namespace std ;
int main () 
{
    double l_c,b_c1,b_c2,b_a,c,tax,i,n2=15,n1=1;
    char o,l ;
    
    cout<<"Enter objective (Utilization, Waste) : " ;
    cin>>o ;
    if (o=='W')
    {
               cout<<"land cost (million) : " ;
               cin>>l_c ;
               cout<<"land age : " ;
               cin>>b_a ;
               cout<<"Your estate cost is "<<l_c<<" million bath. "<<endl;
               if (b_a<=3 && b_a>=1) cout<<"The land tax is exemption."<<endl ;
               else if (b_a<=6 && b_a>=4) 
               {
                    tax = (l_c*1.2)/100.00 ;
                    cout<<"The land tax is "<<tax<<" million bath"<<endl ;
                    }
               else if (b_a>=7)
               {
                    tax = (l_c*2.4)/100.00 ;
                    cout<<"The land tax is "<<tax<<" million bath"<<endl ;
                    }
               }
    else if (o=='U')
    {
         cout<<"Enter utilization type (Business, Agriculture) : " ;
         cin>>l ;
         cout<<"Enter land cost (million) : ";
         cin>>l_c ;
         cout<<"Enteer building cost (million) : " ;
         cin>>b_c1 ;
         cout<<"Building age : " ;
         cin>>b_a ;
         
         if (b_a>=1 && b_a<=10)
         {
                    for (i=1;i<=b_a;i=i+1) 
                    {
                        n2=n2+1.5;
                        }
                    b_c2 = (b_c1*i)/100 ;
                    b_c1=b_c1 - b_c2 ;
                    }
         else if (b_a>=11 && b_a<=40)
         {
              for (i=11;i<=b_a;i=i+1) 
              {
                  n2=n2+1.8;
                  }
              b_c2 = (b_c1*n2)/100 ;
              b_c1=b_c1 - b_c2 ;
              }
         else if (b_a>=41)
         {
              b_c2 = (b_c1*70.8)/100 ;
              b_c1=b_c1 - b_c2 ;
              }
         c= l_c + b_c1 ;     
         cout<<"Your estate cost is "<<c<<" ("<<l_c<<"+"<<b_c1<<") million bath. "<<endl ;
         
         if (l=='B')
         {
                    if (c<20) tax=(c*0.3)/100.0 ;
                    else if (c>=20 && c<50) tax=(c*0.5)/100 ;
                    else if (c>=50) tax=(c*0.7)/100 ;
                    } 
         if (l=='A')
         {
                    if (c<30) cout<<"The land tax is exemption."<<endl ;
                    else if (c>=30 && c<60) tax=(c*0.06)/100.0 ;
                    else if (c>=60) tax=(c*0.12)/100 ;
         }   
         cout<<"The land tax is "<<tax<<" million bath"<<endl ;
    }
    system ("pause") ;
    return 0 ;
}
          
