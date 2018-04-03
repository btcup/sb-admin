#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double u,v,Ft,s,Vat,e,t;
    cout<<"Please input usage :";
    cin>>u;
    cout<<"Please input voltage :";
    cin>>v;
    
     if (u<=0)
        {
        cout<<"Invalid Input!!!"<<endl;
        }
    else if(v>=22&&v<=33)
      { 
      e=u*2.4649;
      cout<<"Electricity Cost:"<<e<<endl;
      s=228.17;
      cout<<"Service:"<<s<<endl;
      Ft=46.38/100*u;
      cout<<"Ft:"<<Ft<<endl;
      Vat = (e+s+Ft)*7/100;
      cout<<"Vat 7 %:"<<Vat<<endl;
      t=ceil(e+s+Ft+Vat);
      cout<<"Total cost :"<<t<<endl;
      }
    else if(v<22)
      {
        if(u>=0&&u<=150)
        {
            e=u*1.8047;
            cout<<"Electricity Cost 0-150:"<<e<<endl;
            s=40.90;
            cout<<"Service:"<<s<<endl;
            Ft=46.38/100*u;
            cout<<"Ft:"<<Ft<<endl;
            Vat = (e+s+Ft)*7/100;
            cout<<"Vat 7 %:"<<Vat<<endl;
            t=ceil(e+s+Ft+Vat);
            cout<<"Total cost :"<<t<<endl;
         }                     
       else if(u>=0&&u<=150)
        {
            e=u*1.8047;
            cout<<"Electricity Cost 0-150:"<<e<<endl;
            s=40.90;
            cout<<"Service:"<<s<<endl;
            Ft=46.38/100*u;
            cout<<"Ft:"<<Ft<<endl;
            Vat = (e+s+Ft)*7/100;
            cout<<"Vat 7 %:"<<Vat<<endl;
            t=ceil(e+s+Ft+Vat);
            cout<<"Total cost :"<<t<<endl;
       
       
       
       }
       
       
  
    
    
    
    
    
    
    
    
    
    
   
   
    
    
    
    
    
    
    
    
system("pause");
return 0;
}
    
