#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int w,x,y,z;
    double a,b;
    cout <<"Please input usage : ";
    cin>>w;
    if (w<0) 
     cout <<"Invalid Input !!!"<<endl;
    cout <<"Please input voltage : ";
    cin>>x;
    if (x>=22&&x<=33)
    {
       cout <<"Electricity Cost : "<<w*2.4649<<endl;
       cout <<"Service : 228.17"<<endl;
       cout <<"Ft : "<<(w/100.0)*46.38<<endl;
       a = ((w*2.4649)+228.17+(w/100.0)*46.38)*7/100;
       cout <<"Vat 7 % : "<<a<<endl;
       b = (((w*2.4649)+228.17+(w/100.0)*46.38)+a);
       cout <<"Total : "<<ceil(b)<<" Baht"<<endl;
    }
    if (x<22)
    {
       if (w-150>=0)
       {
       cout <<"Electricity Cost 0-150 : "<<150*1.8047<<endl;
       y=w-150;
       }
       {
       if (y>0&&y<250)
       cout <<"Electricity Cost 151-400 : "<<y*2.7781<<endl;
       }
       if (y>250)
       cout <<"Electricity Cost 151-400 : "<<250*2.7781<<endl;
       z=w-400;
       if (z>0)
       cout <<"Electricity Cost 401 : "<<z*2.9780<<endl;
       }
       cout <<"Service : 40.90"<<endl;
       cout <<"Ft : "<<(w/100.0)*46.38<<endl;
       if (w<=150)
       {
       a = ((w*1.8047)+40.90+(w/100.0)*46.38)*7/100;
       cout <<"Vat 7 % : "<<a<<endl;
       b = (((w*1.8047)+40.90+(w/100.0)*46.38)+a);
       cout <<"Total : "<<ceil(b)<<" Baht"<<endl;
       }
       
       if (w>150&&w<400)
       {
       a = ((w*2.7781)+40.90+(w/100.0)*46.38)*7/100;
       cout <<"Vat 7 % : "<<a<<endl;
        b = (((w*2.7781)+40.90+(w/100.0)*46.38)+a);
       cout <<"Total : "<<ceil(b)<<" Baht"<<endl;
       }
      if (w>400)
       {
       a = ((w*2.9780)+40.90+(w/100.0)*46.38)*7/100;
       cout <<"Vat 7 % : "<<a<<endl;
        b = (((w*2.9780)+40.90+(w/100.0)*46.38)+a);
       cout <<"Total : "<<ceil(b)<<" Baht"<<endl;
       }
system ("pause");
return 0;
}
       
             
    
