#include <iostream>
using namespace std;
int main()
{
    int usa , vol , sum=0 ;
    double cost  , ser , ft , vat , Ft , a , b , c , d , e ,;
    
    cout<<"Please input usage : ";
    cin>>usa;
    
    if(usa<0)
    {
             cout<<"Invalid Input !!! "<<endl;
             }
    else if(usa>0)
    {
         cout<<"Please input voltage : ";
         cin>>vol;
         
         if( vol>=22 && vol<=33)
         {
             a = 2.4649;
             cost = usa*a;
             ser = 228.17;
             ft = 46.38;
             Ft = (usa*ft)/100;
             vat = ((cost+ser+Ft)*7)/100;
             sum = cost+ser+Ft+vat;
             
             cout<<"Electricity Cost : "<<cost<<endl;
             cout<<"Service : "<<ser<<endl;
             cout<<"Ft : "<<Ft<<endl;
             cout<<"Vat 7 % : "<<vat<<endl;
             cout<<"Total cost : " <<sum<<" Baht "<<endl;
         }
         else if (vol<22)
         {
              if(usa>=0 && usa<=150)
              {
                        a = 1.8047;
                        cost = usa*a;
                        ser = 40.90;
                        ft = 46.38;
                        Ft = (usa*ft)/100;
                        vat = ((cost+ser+Ft)*7)/100;
                        sum = cost+ser+Ft+vat;
                        
                        cout<<"Electricity Cost 0-150 : "<<cost<<endl;
                        cout<<"Service : "<<ser<<endl;
                        cout<<"Ft : "<<Ft<<endl;
                        cout<<"Vat 7 % : "<<vat<<endl;
                        cout<<"Total cost : " <<sum<<" Baht "<<endl; 
                        
                        }
              else if(usa>=151 && usa<=400)
              {
                   a=1.8047;
                   cost = 150*a;
                   b = 2.7781;
                   c = usa*b;
                   ser = 40.90;  
                   ft = 46.38;
                   Ft = (usa*ft)/100;
                   vat = ((cost+ser+Ft)*7)/100;
                   sum = cost+ser+Ft+vat+c;   
                   
                   cout<<"Electricity Cost 0-150 : "<<cost<<endl;
                   cout<<"Electricity Cost 151-400 : "<<c<<endl;
                   cout<<"Service : "<<ser<<endl;
                   cout<<"Ft : "<<Ft<<endl;
                   cout<<"Vat 7 % : "<<vat<<endl;
                   cout<<"Total cost : " <<sum<<" Baht "<<endl; 
                                 
                   }
              else if(usa>401)
              {
                   a=1.8047;
                   cost = 150*a;
                   b = 2.7781;
                   c = usa*b;
                   d = 2.9780;
                   e = usa*d;
                   ser = 40.90;  
                   ft = 46.38;
                   Ft = (usa*ft)/100;
                   vat = ((cost+ser+Ft)*7)/100;
                   sum = cost+ser+Ft+vat+c+e;   
                   
                   cout<<"Electricity Cost 0-150 : "<<cost<<endl;
                   cout<<"Electricity Cost 151-400 : "<<c<<endl;
                   cout<<"Electricity Cost 400 -> : "<<e<<endl;
                   cout<<"Service : "<<ser<<endl;
                   cout<<"Ft : "<<Ft<<endl;
                   cout<<"Vat 7 % : "<<vat<<endl;
                   cout<<"Total cost : " <<sum<<" Baht "<<endl; 
              }
         
         
         }
         }
    
    
    
system ("pause");
return 0;    
}
