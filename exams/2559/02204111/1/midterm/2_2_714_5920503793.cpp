#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char u,t;
    float la,bc,ba,ec,lt,y,lc;
    cout<<"Enter objective (Utilization, Waste) : ";
    cin>>t;
    if(t='U')
    {
           cout<<"Enter utilization type (Business, Agricluture) : ";
           cin>>u;
           cout<<"Enter land cost (million) : ";
           cin>>la;
           if(u=='B'&&la<20)
           { 
             cout<<"Enter building cost (million) : ";
             cin>>bc;
             cout<<"Building age : ";
             cin>>ba;
             cout<<"Your estate cost is "<<ec<<"million bath"<<endl;
             cin>>ec;
             ec=(ba*0.3/100)*(la+0.3/100);
             cout<<"The land tax is "<<ec<<endl;
             cin>>lt;
           }
           else if(u=='B'&&la>=20&&la<50)
           {
             cout<<"Enter building cost (million) : ";
             cin>>bc;
             cout<<"Building age : ";
             cin>>ba;
             cout<<"Your estate cost is"<<ec<<" million bath";
             cin>>ec;
             ec=(ba*0.5/100)*(la+0.5/100);
             cout<<"The land tax is "<<ec<<endl;
             cin>>lt;
           }
           else if(u=='B'&&la>=50)
           { 
             cout<<"Enter building cost (million) : ";
             cin>>bc;
             cout<<"Building age : ";
             cin>>ba;
             cout<<"Your estate cost is"<<ec<<" million bath";
             cin>>ec;
             ec=(ba*0.7/100)*(la+0.7/100);
             cout<<"The land tax is "<<ec<<endl;
             cin>>lt;
           }
           else if(u=='A'&&la<30)
           { cout<<"Enter building cost (million) : ";
             cin>>bc;
             cout<<"Building age : ";
             cin>>ba;
             cout<<"Your estate cost is million bath";
             cin>>ec;
             cout<<"The land tax is exemption"<<endl;
             cin>>lt;
           }
           else if(u=='A'&&la>=30&&la<60)
           { 
             cout<<"Enter building cost (million) : ";
             cin>>bc;
             cout<<"Building age : ";
             cin>>ba;
             cout<<"Your estate cost is"<<ec<<" million bath";
             cin>>ec;
             ec=(ba*0.06/100)*(la+0.06/100);
             cout<<"The land tax is "<<ec<<endl;
             cin>>lt;
           }
           else if(u=='A'&&la>60)
           { 
             cout<<"Enter building cost (million) : ";
             cin>>bc;
             cout<<"Building age : ";
             cin>>ba;
             cout<<"Your estate cost is"<<ec<<"million bath";
             cin>>ec;
             ec=(ba*0.12/100)*(la+0.12/100);
             cout<<"The land tax is "<<ec<<endl;
             cin>>lt;
           }
    }
    else if(t='W')
    {      cout<<"Enter utilization type (Business, Agricluture) : ";
           cin>>u;
           if(y>=1&&y<=3)
           {
             cout<<"land cost (million) : ";
             cin>>lc;
             cout<<"land age : ";
             cin>>la;
             cout<<"Your estaet cost is "<<lc<<" million bath";
             cin>>ec;
             cout<<"The land tax is exemption";
             cin>>lt;  
           }
           else if(y>=4&&y<=6)
           {
             cout<<"land cost (million) : ";
             cin>>lc;
             cout<<"land age : ";
             cin>>la;
             cout<<"Your estaet cost is "<<lc<<" million bath";
             cin>>lc;
             lt=la*1.2/100;
             cout<<"The land tax is"<<lt<<" million bath";
             cin>>lt;
           }
           else if(y>=7)
           {
             cout<<"land cost (million) : ";
             cin>>lc;
             cout<<"land age : ";
             cin>>la;
             cout<<"Your estaet cost is "<<lc<<" million bath";
             cin>>lc;
             lt=la*2.4/100;
             cout<<"The land tax is"<<lt<<" million bath";
             cin>>lt;
           }                      
    }
}
