#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,Ft,e;
    cout<<"Please input using :";
    cin>>a;
    cout<<"Please input voltage :"<<endl;
    cin>>b;
    if(b>=22)
   { 
             Ft=(46.38*a)/100.0;
             d=((a*2.4649)+228.17+((46.38*a)/100.0))*0.07;
             c=(a*2.4649)+228.17+(46.38*a);
             cout<<"Electricity cost :"<<a*2.4649<<endl;
             cout<<"Service : 228.17"<<endl;
             cout<<"Ft :"<<Ft<<endl;
             cout<<"vat 7%"<<vat<<endl;
             cout<<"Total cost :"<<c+d<<endl;    
}
     eles if (b<22)
        if (a<150)
        {
             Ft=(46.38*a)/100.0;
             d=((a*1.8047)+40.90+((46.38*a)/100.0))*0.07;
             c=(a*1.8047)+40.90+(46.38*a);
             cout<<"Electricity cost 0-150 :"<<a*1.8047<<endl;
             cout<<"Service : 40.9"<<endl;
             cout<<"Ft :"<<Ft<<endl;
             cout<<"vat 7%"<<d<<endl;
             cout<<"Total cost :"<<c+d<<endl; 
             }
             eles if (150<a<400)
             {
                  Ft=(46.38*a)/100.0;
                  d=((a*1.8047)+40.90+((46.38*a)/100.0))*0.07;
                  e=((a*2.7781)+40.90+((46.38*a)/100.0))*0.07;
                  c=(a*1.8047)+40.90+(46.38*a);
                  cout<<"Electricity cost 0-150 :"<<a*1.8047<<endl;
                  cout<<"Electricity cost 250-400 :"<<a*2.7781<<endl;
                  cout<<"Service : 40.90"<<endl;
                  cout<<"Ft :"<<Ft<<endl;
                  cout<<"vat 7%"<<d+e<<endl;
                  cout<<"Total cost :"<<c+d+e<<endl; 
                  }
             eles if (a>400)
             {
                  Ft=(46.38*a)/100.0;
                  d=((a*1.8047)+40.90+((46.38*a)/100.0))*0.07;
                  e=((a*2.7781)+40.90+((46.38*a)/100.0))*0.07;
                  f=((a*2.9780)+40.90+((46.38*a)/100.0))*0.07;
                  c=(a*1.8047)+40.90+(46.38*a);
                  cout<<"Electricity cost 0-150 :"<<a*1.8047<<endl;
                  cout<<"Electricity cost 250-400 :"<<a*2.7781<<endl;
                  cout<<"Electricity cost 250-400 :"<<a*2.9780<<endl;
                  cout<<"Service : 40.90"<<endl;
                  cout<<"Ft :"<<Ft<<endl;
                  cout<<"vat 7%"<<d+e+f<<endl;
                  cout<<"Total cost :"<<c+d+e+f<<endl; 
                  }               
             
}
system ("pause");
retuen 0;
