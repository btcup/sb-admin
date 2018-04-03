#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,d,e,p,t,w,z;
    cout<<"Please input usage : ";
    cin>>a;
    cout<<"Please input voltage : ";
    cin>>p;
    cout<<" "<<endl;
    if( p>=22 &&p <=33 )
    {
        cout<<"Electricity Cost : ";
        b=a*2.4649 ;
        cout<<b<<endl;
        cout<<"service : ";
        c=228.17;
        cout<<c<<endl;
        cout<<"Ft : ";
        d=a*46.38/100;
        cout<<d<<endl;
        cout<<"Vat 7 % : ";
        e=(b+c+d)*0.07;
        cout<<e<<endl;
        cout<<" "<<endl;
        cout<<"Total cost : ";
        t=(b+c+d+e);
        cout<<ceil(t)<<endl;
    }
    else if(p<22)
    {
         if(a>=0 && a<=150)
         {
         cout<<"Electricity Cost : ";
        b=a*1.8047 ;
        cout<<b<<endl;
        cout<<"service : ";
        c=40.90;
        cout<<c<<endl;
        cout<<"Ft : ";
        d=a*46.38/100;
        cout<<d<<endl;
        cout<<"Vat 7 % : ";
        e=(b+c+d)*0.07;
        cout<<e<<endl;
        cout<<" "<<endl;
        cout<<"Total cost : ";
        t=(b+c+d+e);
        cout<<ceil(t)<<endl;
        }
        if(a>=150 && a<=400)
         {
         cout<<"Electricity Cost 0-150 : ";
        b=150*1.8047 ;
        cout<<b<<endl;
        cout<<"Electricity Cost 151-400 : ";
        w=(a-150)*2.7781 ;
        cout<<w<<endl;
        cout<<"service : ";
        c=40.90;
        cout<<c<<endl;
        cout<<"Ft : ";
        d=a*46.38/100;
        cout<<d<<endl;
        cout<<"Vat 7 % : ";
        e=(b+c+d+w)*0.07;
        cout<<e<<endl;
        cout<<" "<<endl;
        cout<<"Total cost : ";
        t=(b+c+d+e+w);
        cout<<ceil(t)<<endl;
        }
         if( a>400)
         {
         cout<<"Electricity Cost 0-150 : ";
        b=150*1.8047 ;
        cout<<b<<endl;
        cout<<"Electricity Cost 151-400 : ";
        w=(400-150)*2.7781 ;
        cout<<w<<endl;
        cout<<"Electricity Cost 400-> : ";
        z=(a-400)*2.9780 ;
        cout<<z<<endl;
        cout<<"service : ";
        c=40.90;
        cout<<c<<endl;
        cout<<"Ft : ";
        d=a*46.38/100;
        cout<<d<<endl;
        cout<<"Vat 7 % : ";
        e=(b+c+d+w+z)*0.07;
        cout<<e<<endl;
        cout<<" "<<endl;
        cout<<"Total cost : ";
        t=(b+c+d+e+w+z);
        cout<<ceil(t)<<endl;
        }
         
    
    }
    else if(p<0 || p>33)
    {
    cout<<"Invalid Input !!! "<<endl;
    }
    system ("pause");
    return 0;
}
