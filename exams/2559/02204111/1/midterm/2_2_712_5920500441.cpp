// 5920500441 Piyawut Pumkuman

#include <iostream>
using namespace std;
int main ()
{
    double a,b,c,t,d,T,p,k; //a=land cost, c=year, t=tax, d=Building, T=Total, p=lod
    char x,y,;
    
    cout<<"Enter objective (Utilization, Waste) : ";
    cin>>x;
    
    if(x=='U')
    {
             cout<<"Enter utilization type (Business, Agriculture) : ";
             cin>>y;
             cout<<"The land cost (million) : ";
             cin>>a;
             cout<<"Enter building cost (million) :";
             cin>>d;
             cout<<"Building age :";
             cin>>c;
              if (c>=1&&c<=10)
               p=1.5*c/100;      
               else if (c>=11&&c<=40)
               p=1.8*c/100;
               else if (c>41)
               p=70.8/100;      k=d-(d*p); 
               if (y=='B')
                    {
                               if((a+k)<20)
                               {t=0.3/100;
                                            }
                               else if ((a+k)>=20&&(a+k)<50)
                               {
                                  t=0.5/100;  
                                    }
                               else if ((a+k)>=50)
                               {
                                    t=0.7/100;
                                }
                    }
                    else if (y=='A')
                    {
                         if ((a+k)<30)
                         {t=0;}
                         else if ((a+k)>=30&&(a+k)<60)
                         {t=0.06/100;}
                         else if ((a+k)>=60)
                         {t=0.12/100;}                     }                                                    
               
         
          
          
          
          
          cout<<"Your estate cost is "<<a+k<< "("<<a<<" + "<<k<<") million bath."<<endl;
          cout<<"The land tax is "<<(a+k)*t<<" million bath. "<<endl;
    }
    else if (x=='W')
    {
         cout<<"land cost (million) : ";
         cin>>a;
         cout<<"land age : ";
         cin>>c;
         cout<<"Your estate cost is "<<a<<" million bath. "<<endl;
         if (c>=1&&c<=3)
         {
               cout<<"The land tax is exemption."<<endl;
                        }
         else if (c>=4&&c<=6)
         {
              cout<<"The land tax is "<<a*1.2/100<<" million bath. "<<endl;
          }
         else if (c>=7)
         {
              cout<<"The land tax is "<<a*2.4/100<<" million bath. "<<endl; 
          }     
         
     }
    
    
    
    system ("pause");
    return 0;
}
