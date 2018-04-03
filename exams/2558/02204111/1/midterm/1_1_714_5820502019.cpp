#include <iostream>
using namespace std;
int main()
{
    int u,v;
    double x,y,z,w,r;
    cout<<"Please input usage : ";
    cin>>u;
    cout<<"Please input voltage : ";
    cin>>v;
    cout<<endl;
    if(u<=0)
    cout<<"Invalid Input !!!"<<endl;
    else if(v>22&&v<33)
    {
    
                  y=228.17;
                  x=2.4649;
                  z=46.38/100;
                  cout<<"Electricity Cost : "<<x*u<<endl;
                  cout<<"Service : "<<y<<endl;
                  cout<<"Ft : "<<z*u<<endl;
                  cout<<"Vat 7 % : "<<((u*x)+y+(z*u))*7/100<<endl;
                  cout<<endl;
                  cout<<"Total cost : "<<int((u*x)+y+(z*u)+(((u*x)+y+(z*u))*7/100))<<" Baht"<<endl;
    }
    else if(v<22)
    {
         if(u>=0&&u<=150)
         {
                  y=40.90;
                  x=1.8047;
                  z=46.38/100;
                  cout<<"Electricity Cost 0-150: "<<x*u<<endl;
                  cout<<"Service : "<<y<<endl;
                  cout<<"Ft : "<<z*u<<endl;
                  cout<<"Vat 7 % : "<<((u*x)+y+(z*u))*7/100<<endl;
                  cout<<endl;
                  cout<<"Total cost : "<<int((u*x)+y+(z*u)+(((u*x)+y+(z*u))*7/100))<<" Baht"<<endl;
         }
         else if(u>=151&&u<=400)
         {
                  y=40.90;
                  x=1.8047;
                  w=2.7781;
                  z=46.38/100;
                  cout<<"Electricity Cost 0-150 : "<<x*150<<endl;
                  cout<<"Electricity Cost 151-400 : "<<w*(u-150)<<endl;
                  cout<<"Service : "<<y<<endl;
                  cout<<"Ft : "<<z*u<<endl;
                  cout<<"Vat 7 % : "<<((x*150)+(w*(u-150))+y+(z*u))*7/100<<endl;
                  cout<<endl;
                  cout<<"Total cost : "<<int(((x*150)+(w*(u-150))+y+(z*u))+(((x*150)+(w*(u-150))+y+(z*u))*7/100))<<" Baht"<<endl;
         }
         else if(u>=401)
         {
                  y=40.90;
                  x=1.8047;
                  w=2.7781;
                  r=2.9780;
                  z=46.38/100;
                  cout<<"Electricity Cost 0-150 : "<<x*150<<endl;
                  cout<<"Electricity Cost 151-400 : "<<w*(400-150)<<endl;
                  cout<<"Electricity Cost 151-400 : "<<r*(u-400)<<endl;
                  cout<<"Service : "<<y<<endl;
                  cout<<"Ft : "<<z*u<<endl;
                  cout<<"Vat 7 % : "<<((x*150)+(w*(400-150))+(r*(u-400))+y+(z*u))*7/100<<endl;
                  cout<<endl;
                  cout<<"Total cost : "<<int(((x*150)+(w*(400-150))+(r*(u-400))+y+(z*u))+(((x*150)+(w*(400-150))+(r*(u-400))+y+(z*u))*7/100))<<" Baht"<<endl;
         }
    }
    system("pause");
    return 0;
}
