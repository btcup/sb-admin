#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,e,z,f,g,h;
    cout<<"Please input usang : ";
    cin>>a;
    cout<<"Please input voltage : ";
    cin>>b;
    
    
    
    if(b>=22&&b<=33)
       {
       c=2.4649*a;
       cout<<"Electricity Cost : "<<c<<endl;
       z=228.17;
       cout<<"service : 228.17"<<endl;
       d=a*0.4638;
       cout<<"Ft : "<<d<<endl;
       e=(c+d+z)*7/100;
       cout<<"Vat 7 %  : "<<e<<endl;
       f=c+d+z+e;
       cout<<"Total cost : "<<f<<endl;
       }
       
       
    else if(b>=0&&b<22) 
         {
         if(a>=0&&a<=150)
         c=1.8047*a;
         cout<<"Electricity Cost 0-150: "<<c<<endl;
         z=40.90;
         cout<<"service : 40.90"<<endl;
         d=a*0.4638;
         cout<<"Ft : "<<d<<endl;
         e=(c+d+z)*7/100;
         cout<<"Vat 7 %  : "<<e<<endl;
         f=c+d+z+e;
         cout<<"Total cost : "<<f<<endl;
         }
         
          {     
         if(a>=151&&a<=400)
         c=1.8047*a;
         cout<<"Electricity Cost 0-150: "<<c<<endl;
         g=2.7781*a;
         cout<<"Electricity Cost 151-400: "<<g<<endl;
         
         z=40.90;
         cout<<"service : 40.90"<<endl;
         d=a*0.4638;
         cout<<"Ft : "<<d<<endl;
         e=(c+d+z+g)*7/100;
         cout<<"Vat 7 %  : "<<e<<endl;
         f=c+d+z+e;
         cout<<"Total cost : "<<f<<endl;
         }
    
         if(a>400)
         c=1.8047*a;
         cout<<"Electricity Cost 0-150: "<<c<<endl;
         g=2.7781*a;
         cout<<"Electricity Cost 151-400: "<<g<<endl;
         h=2.7781*a;
         cout<<"Electricity Cost 400 -> : "<<h<<endl;
         z=40.90;
         cout<<"service : 40.90"<<endl;
         d=a*0.4638;
         cout<<"Ft : "<<d<<endl;
         e=(c+d+z+g+h)*7/100;
         cout<<"Vat 7 %  : "<<e<<endl;
         f=c+d+z+e;
         cout<<"Total cost : "<<f<<endl;
         }
    
    
    system("pause");
    return 0;
}
